package statements

import (
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleStatement(node *sitter.Node, context *glsp.Context, partHandlers map[string]func(*sitter.Node, *glsp.Context) []protocol.Diagnostic) []protocol.Diagnostic {
	current := node
	err := protocol.DiagnosticSeverityError
	for key, handler := range partHandlers {
		if current == nil {
			return []protocol.Diagnostic{{
				Message:  "Expected: " + key,
				Severity: &err,
				Range:    util.GetEndRange(node),
			}}
		} else if current.Type() == key {
			diagnostics := handler(node, context)
			if len(diagnostics) > 0 {
				return diagnostics
			}
		} else {
			return []protocol.Diagnostic{{
				Message:  "Expected: " + key + " Found: " + current.Type(),
				Severity: &err,
				Range:    util.GetRange(current),
			}}
		}
	}
	return []protocol.Diagnostic{}
}
