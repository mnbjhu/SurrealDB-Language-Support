package types

import (
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type BooleanType struct{}

func (s BooleanType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	_, ok := t.(BooleanType)
	return ok
}

func (s BooleanType) String() string {
	return "boolean"
}

func (s BooleanType) HighlightIssues(node *sitter.Node) []protocol.Diagnostic {
	found := ParseType(node).String()
	if found == "error" {
		return HighlightErrorType(node)
	}
	if found != "boolean" {
		return HighlightUnexpectedType(node, "boolean", found)
	}
	return []protocol.Diagnostic{}
}

func (s BooleanType) TypeName() string {
	return "boolean"
}
