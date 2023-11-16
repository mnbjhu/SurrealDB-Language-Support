package types

import (
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type StringType struct{}

func (s StringType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	_, ok := t.(StringType)
	return ok
}

func (s StringType) String() string {
	return "string"
}

func (s StringType) HighlightIssues(node *sitter.Node) []protocol.Diagnostic {
	found := ParseType(node).String()
	if found == "error" {
		return HighlightErrorType(node)
	}
	if found != "string" {
		return HighlightUnexpectedType(node, "string", found)
	}
	return []protocol.Diagnostic{}
}

func (s StringType) TypeName() string {
	return "string"
}
