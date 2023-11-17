package statements

import (
	"github.com/mnbjhu/surql-lsp/model/diagnostics/parts"
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HandleDefineStatement(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	if node.NamedChildCount() == 1 {
		return []protocol.Diagnostic{{
			Message:  "Expected 'TABLE', 'FIELD', 'FUNCTION'",
			Severity: &err,
			Range:    util.GetRange(node),
		}}
	}

	type_name := node.NamedChild(2)
	if type_name.Type() != "identifier" {
		return []protocol.Diagnostic{{
			Message:  "Expected 'TABLE', 'FIELD', 'FUNCTION'",
			Severity: &err,
			Range:    util.GetRange(type_name),
		}}
	}

	switch type_name.Type() {
	case "table":
		return handleDefineTableStatement(node, context)
	case "field":
		return handleDefineFieldStatement(node, context)
	case "function":
		return handleDefineFunctionStatement(node, context)
	}
	return []protocol.Diagnostic{}
}

func handleDefineTableStatement(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	return parts.HandleTablePart(node, context)
}

func handleDefineFieldStatement(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	return parts.HandleFieldPart(node, context)
}

func handleDefineFunctionStatement(node *sitter.Node, context *glsp.Context) []protocol.Diagnostic {
	return parts.HandleFunctionPart(node, context)
}
