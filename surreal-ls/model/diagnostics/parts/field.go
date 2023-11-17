package parts

import (
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleFieldPart(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	if node.NamedChildCount() == 0 {
		return []protocol.Diagnostic{
			{
				Message:  "Expected: Field name",
				Severity: &err,
				Range:    util.GetRange(node),
			},
		}
	}

	table := node.NamedChild(0)

	if table.Type() != "field_name" {
		return []protocol.Diagnostic{
			{
				Message:  "Expected: 'table' Found: " + table.Type(),
				Severity: &err,
				Range:    util.GetRange(table),
			},
		}
	}
	return []protocol.Diagnostic{}
}
