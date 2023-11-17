package parts

import (
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleFunctionPart(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	if node.NamedChildCount() == 0 {
		return []protocol.Diagnostic{
			{
				Message:  "Expected: Function definition",
				Severity: &err,
				Range:    util.GetRange(node),
			},
		}
	}

	function_definition := node.NamedChild(0)

	if function_definition.Type() != "function_definition" {
		return []protocol.Diagnostic{
			{
				Message:  "Expected: Function definition Found: " + function_definition.Type(),
				Severity: &err,
				Range:    util.GetRange(function_definition),
			},
		}
	}
	return []protocol.Diagnostic{}
}
