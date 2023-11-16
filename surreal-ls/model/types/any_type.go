package types

import (
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type AnyType struct{}

func (s AnyType) IsInstanceOf(t ValueType) bool {
	_, ok := t.(AnyType)
	return ok
}

func (s AnyType) String() string {
	return "any"
}

func (s AnyType) HighlightIssues(node *sitter.Node) []protocol.Diagnostic {
	found := ParseType(node).String()
	if found == "error" {
		return HighlightErrorType(node)
	}
	return []protocol.Diagnostic{}
}

func (s AnyType) TypeName() string {
	return "any"
}
