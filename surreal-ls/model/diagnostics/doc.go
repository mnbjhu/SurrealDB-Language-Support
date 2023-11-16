package diagnostics

import (
	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/model/diagnostics/parts"
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleUnknownStatements() []protocol.Diagnostic {
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

func HandleStatements(context *glsp.Context) []protocol.Diagnostic {
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
				found = append(found, parts.HandleSelectPart(node.Child(i), context)...)
			case "create":
				found = append(found, parts.HandleCreatePart(node.Child(i), context)...)
			}
		}
	}
	return found
}
