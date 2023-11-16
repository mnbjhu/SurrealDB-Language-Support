package features

import (
	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/model/definitions"
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func UpdateDiagnostics(context *glsp.Context, uri protocol.DocumentUri) {
	errs := handleUnknownStatements()
	errs = append(errs, handleStatements(context)...)
	context.Notify("textDocument/publishDiagnostics", protocol.PublishDiagnosticsParams{
		URI:         uri,
		Diagnostics: errs,
	})
}

func handleUnknownStatements() []protocol.Diagnostic {
	query, err := sitter.NewQuery([]byte("(ERROR) @err"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, data.Tree.RootNode())
	found := []protocol.Diagnostic{}
	errType := protocol.DiagnosticSeverityError
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		for _, c := range m.Captures {
			if c.Node.ChildCount() > 0 {
				continue
			}
			found = append(found,
				protocol.Diagnostic{
					Message:  "Unexpected Statement",
					Severity: &errType,
					Range:    util.GetRange(c.Node),
				},
			)
		}
	}
	return found
}

func handleStatements(context *glsp.Context) []protocol.Diagnostic {
	query, err := sitter.NewQuery([]byte("(statement) @statement"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, data.Tree.RootNode())
	found := []protocol.Diagnostic{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		node := m.Captures[0].Node
		for i := 0; i < int(node.ChildCount()); i++ {
			switch node.Child(i).Type() {
			case "select":
				found = append(found, handleSelectPart(node.Child(i), context)...)
			case "create":
				found = append(found, handleCreatePart(node.Child(i), context)...)
			}
		}
	}
	return found
}

func handleSelectPart(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	if node.NamedChildCount() == 0 {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'projections'",
			Severity: &err,
			Range:    util.GetRange(node),
		}}
	}

	projections := node.NamedChild(0)

	if projections.Type() != "varargs" {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'projections' Found: " + projections.String(),
			Severity: &err,
			Range:    util.GetRange(projections),
		}}
	}

	from := node.NextNamedSibling()
	if from == nil {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'from'",
			Severity: &err,
			Range:    util.GetEndRange(node),
		}}
	}
	return handleFromPart(from, context)
}

func handleFromPart(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	if node.NamedChildCount() == 0 {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'table'",
			Severity: &err,
			Range:    util.GetEndRange(node),
		}}
	}

	table := node.NamedChild(0)

	if table.Type() != "identifier" {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'table' Found: " + table.String(),
			Severity: &err,
			Range:    util.GetRange(table),
		}}
	}

	table_def := definitions.FindTableDef(table.Content([]byte(data.Text)))
	if len(table_def) == 0 {
		return []protocol.Diagnostic{{
			Message:  "Table not found: " + table.Content([]byte(data.Text)),
			Severity: &err,
			Range:    util.GetRange(table),
		}}
	}
	return []protocol.Diagnostic{}
}

func handleCreatePart(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	if node.NamedChildCount() == 0 {
		return []protocol.Diagnostic{{
			Message:  "Expected: table name",
			Severity: &err,
			Range:    util.GetRange(node),
		}}
	}

	table := node.NamedChild(0)

	if table.Type() != "identifier" {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'table' Found: " + table.String(),
			Severity: &err,
			Range:    util.GetRange(table),
		}}
	}

	table_name := table.Content([]byte(data.Text))
	table_defs := definitions.FindTableDef(table_name)
	if len(table_defs) == 0 {
		return []protocol.Diagnostic{{
			Message:  "Table not found: " + table_name,
			Severity: &err,
			Range:    util.GetRange(table),
		}}
	}

	content := node.NextNamedSibling()
	if content == nil {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'content'",
			Severity: &err,
			Range:    util.GetEndRange(node),
		}}
	}
	return handleContentPart(content, context, table_defs[0])
}

func handleContentPart(node *sitter.Node, context *glsp.Context, table definitions.TableDef) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	if node.NamedChildCount() == 0 {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'content'",
			Severity: &err,
			Range:    util.GetRange(node),
		}}
	}

	content := node.NamedChild(0)
	expected_type := table.Type(context)
	return expected_type.HighlightIssues(content)
}
