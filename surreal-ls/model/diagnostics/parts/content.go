
package parts

import (
	"github.com/mnbjhu/surql-lsp/model/definitions"
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

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
