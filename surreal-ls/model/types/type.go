package types

import (
	"strings"

	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HighlightErrorType(node *sitter.Node) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityWarning
	return []protocol.Diagnostic{
		{
			Range:    util.GetRange(node),
			Severity: &err,
			Message:  "Could not infer type",
		},
	}
}

func HighlightUnexpectedType(node *sitter.Node, expected string, found string) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	return []protocol.Diagnostic{
		{
			Range:    util.GetRange(node),
			Severity: &err,
			Message:  "Expected " + expected + " but found " + found,
		},
	}
}

type ValueType interface {
	IsInstanceOf(ValueType) bool
	String() string
	HighlightIssues(*sitter.Node) []protocol.Diagnostic
	TypeName() string
}

func indent(text string) string {
	lines := strings.Split(text, "\n")
	ret := ""
	for _, line := range lines {
		ret += "\t" + line + "\n"
	}
	return strings.TrimSuffix(ret, "\n")
}
