package types

import (
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type IntType struct{}

func (s IntType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	_, ok := t.(IntType)
	return ok
}

func (s IntType) String() string {
	return "int"
}

func (s IntType) HighlightIssues(node *sitter.Node) []protocol.Diagnostic {
	found := ParseType(node).String()
	if found == "error" {
		return HighlightErrorType(node)
	}
	if found != "int" {
		return HighlightUnexpectedType(node, "int", found)
	}
	return []protocol.Diagnostic{}
}

func (s IntType) TypeName() string {
	return "int"
}
