package types

import (
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type ErrorType struct{}

func (s ErrorType) IsInstanceOf(t ValueType) bool {
	return false
}

func (s ErrorType) String() string {
	return "error"
}

func (s ErrorType) HighlightIssues(node *sitter.Node) []protocol.Diagnostic {
	return []protocol.Diagnostic{}
}

func (s ErrorType) TypeName() string {
	return "error"
}
