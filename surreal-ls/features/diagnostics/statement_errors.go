package diagnostics

import (
	"fmt"

	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleStatementErrors(context *glsp.Context) []protocol.Diagnostic {
	query, err := sitter.NewQuery([]byte("(crud_statement) @statement"), bindings.GetLanguage())
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
		for _, c := range m.Captures {
			if c.Node.Child(0).Type() == "select_part" {
				for _, err := range HandleSelectStatement(c.Node, context) {
					found = append(found, err)
				}
			}
			if c.Node.Child(0).Type() == "delete_part" {
				for _, err := range HandleDeleteErrors(c.Node, context) {
					found = append(found, err)
				}
			}
		}
	}
	return found
}

func HandleSelectStatement(selectNode *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	found := []protocol.Diagnostic{}
	if selectNode.Child(0).ChildCount() == 1 {
		found = append(found, protocol.Diagnostic{
			Message:  "Expected: 'Projections'",
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(selectNode.StartPoint()),
				End:   ParsePosition(selectNode.EndPoint()),
			},
		})
		return found
	}
	projections := selectNode.Child(0).Child(1)

	if projections.Type() != "varargs" {
		found = append(found, protocol.Diagnostic{
			Message:  fmt.Sprintf("Expected: 'projections', Found: %v", projections.Type()),
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(selectNode.StartPoint()),
				End:   ParsePosition(selectNode.EndPoint()),
			},
		})
	}

	from := selectNode.Child(1)
	if from == nil {
		found = append(found, protocol.Diagnostic{
			Message:  "Expected: 'from'",
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(selectNode.EndPoint()),
				End:   ParsePosition(selectNode.EndPoint()),
			},
		})
		return found
	}
	if from.Type() != "from_part" {
		found = append(found, protocol.Diagnostic{
			Message:  fmt.Sprintf("Expected: 'from', Found: %v", from.Type()),
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(from.StartPoint()),
				End:   ParsePosition(from.EndPoint()),
			},
		})
		return found
	}

	if from.ChildCount() == 1 {
		found = append(found, protocol.Diagnostic{
			Message:  "Expected: table name",
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(from.EndPoint()),
				End:   ParsePosition(from.EndPoint()),
			},
		})
	}
	return found
}

func HandleDeleteErrors(deleteNode *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	warn := protocol.DiagnosticSeverityWarning
	found := []protocol.Diagnostic{}
	if deleteNode.Child(0).ChildCount() == 1 {
		found = append(found, protocol.Diagnostic{
			Message:  "Expected: table name",
			Severity: &err,
			Range: protocol.Range{
				Start: ParsePosition(deleteNode.StartPoint()),
				End:   ParsePosition(deleteNode.EndPoint()),
			},
		})
		return found
	}

	for i := 0; i < int(deleteNode.ChildCount()); i++ {
		if deleteNode.Child(i).Type() == "ERROR" {
			found = append(found, protocol.Diagnostic{
				Message:  "Unexpected part in delete statement",
				Severity: &err,
				Range: protocol.Range{
					Start: ParsePosition(deleteNode.Child(i).StartPoint()),
					End:   ParsePosition(deleteNode.Child(i).EndPoint()),
				},
			})
		}
	}
	if deleteNode.Child(1) == nil || deleteNode.Child(1).Type() != "where_part" {
		found = append(found, protocol.Diagnostic{
			Message:  "This will delete all elements in the table, are you sure you want to do this?",
			Severity: &warn,
			Range: protocol.Range{
				Start: ParsePosition(deleteNode.Child(1).StartPoint()),
				End:   ParsePosition(deleteNode.Child(1).EndPoint()),
			},
		})
		return found
	}

	return found
}
