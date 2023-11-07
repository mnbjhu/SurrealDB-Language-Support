package diagnostics

import (
	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleUnknownStatements() []protocol.Diagnostic {
	query, err := sitter.NewQuery([]byte("(ERROR (ERROR)) @err"), bindings.GetLanguage())
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

func ParsePosition(point sitter.Point) protocol.Position {
	return protocol.Position{
		Line:      point.Row,
		Character: point.Column,
	}
}
