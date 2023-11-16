package parts

import (
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleSelectPart(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
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
	return HandleFromPart(from, context)
}

