package types

import (
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type NothingType struct{}

func (s NothingType) IsInstanceOf(t ValueType) bool {
	return true
}

func (s NothingType) String() string {
	return "nothing"
}

func (s NothingType) TypeName() string {
	return "nothing"
}

func (s NothingType) HighlightIssues(node *sitter.Node) []protocol.Diagnostic {
	found := ParseType(node).String()
	if found == "error" {
		return HighlightErrorType(node)
	}
	return []protocol.Diagnostic{}
}
