package features

import (
	"fmt"

	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
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
					Range: protocol.Range{
						Start: ParsePosition(c.Node.StartPoint()),
						End:   ParsePosition(c.Node.EndPoint()),
					},
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
			Range: protocol.Range{
				Start: ParsePosition(node.StartPoint()),
				End:   ParsePosition(node.EndPoint()),
			},
		}}
	}

	projections := node.NamedChild(0)

	if projections.Type() != "varargs" {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'projections' Found: " + projections.String(),
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(node.StartPoint()),
				End:   ParsePosition(node.EndPoint()),
			},
		}}
	}

	from := node.NextNamedSibling()
	if from == nil {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'from'",
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(node.EndPoint()),
				End:   ParsePosition(node.EndPoint()),
			},
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
			Range: protocol.Range{
				Start: ParsePosition(node.EndPoint()),
				End:   ParsePosition(node.EndPoint()),
			},
		}}
	}

	table := node.NamedChild(0)

	if table.Type() != "identifier" {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'table' Found: " + table.String(),
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(node.StartPoint()),
				End:   ParsePosition(node.EndPoint()),
			},
		}}
	}

	table_def := FindTableDef(table.Content([]byte(data.Text)))
	if len(table_def) == 0 {
		return []protocol.Diagnostic{{
			Message:  "Table not found: " + table.Content([]byte(data.Text)),
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(table.StartPoint()),
				End:   ParsePosition(table.EndPoint()),
			},
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
			Range: protocol.Range{
				Start: ParsePosition(node.EndPoint()),
				End:   ParsePosition(node.EndPoint()),
			},
		}}
	}

	table := node.NamedChild(0)

	if table.Type() != "identifier" {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'table' Found: " + table.String(),
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(node.StartPoint()),
				End:   ParsePosition(node.EndPoint()),
			},
		}}
	}

	table_name := table.Content([]byte(data.Text))
	table_defs := FindTableDef(table_name)
	if len(table_defs) == 0 {
		return []protocol.Diagnostic{{
			Message:  "Table not found: " + table_name,
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(table.StartPoint()),
				End:   ParsePosition(table.EndPoint()),
			},
		}}
	}

	content := node.NextNamedSibling()
	if content == nil {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'content'",
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(node.EndPoint()),
				End:   ParsePosition(node.EndPoint()),
			},
		}}
	}
	return handleContentPart(content, context, table_defs[0])
}

func handleContentPart(node *sitter.Node, context *glsp.Context, table TableDef) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	if node.NamedChildCount() == 0 {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'content'",
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(node.EndPoint()),
				End:   ParsePosition(node.EndPoint()),
			},
		}}
	}

	content := node.NamedChild(0)

	content_type := ParseType(content)
	expected_type := table.Type(context)

	context.Notify("window/logMessage", protocol.LogMessageParams{
		Type:    protocol.MessageTypeWarning,
		Message: fmt.Sprintf("Found %v content type, but expected %v", content_type, expected_type),
	})

	if !content_type.IsInstanceOf(expected_type) {
		return []protocol.Diagnostic{{
			Message:  "Expected: " + expected_type.String() + " Found: " + content_type.String(),
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(content.StartPoint()),
				End:   ParsePosition(content.EndPoint()),
			},
		}}
	}

	return []protocol.Diagnostic{}
}
