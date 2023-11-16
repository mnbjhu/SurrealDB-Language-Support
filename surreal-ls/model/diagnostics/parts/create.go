package parts

import (
	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/model/definitions"
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleCreatePart(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	if node.NamedChildCount() == 0 {
		return []protocol.Diagnostic{{
			Message:  "Expected: table name",
			Severity: &err,
			Range:    util.GetRange(node),
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

	table_name := table.Content([]byte(data.Text))
	table_defs := definitions.FindTableDef(table_name)
	if len(table_defs) == 0 {
		return []protocol.Diagnostic{{
			Message:  "Table not found: " + table_name,
			Severity: &err,
			Range:    util.GetRange(table),
		}}
	}

	content := node.NextNamedSibling()
	if content == nil {
		return []protocol.Diagnostic{{
			Message:  "Expected: 'content'",
			Severity: &err,
			Range:    util.GetEndRange(node),
		}}
	}
	return handleContentPart(content, context, table_defs[0])
}
