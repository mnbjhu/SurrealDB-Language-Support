
package parts

import (
	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/model/definitions"
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleFromPart(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
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

