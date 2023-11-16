package types

import (
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type FloatType struct{}

func (s FloatType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	_, ok := t.(FloatType)
	return ok
}

func (s FloatType) String() string {
	return "float"
}

func (s FloatType) HighlightIssues(node *sitter.Node) []protocol.Diagnostic {
	found := ParseType(node).String()
	if found == "error" {
		return HighlightErrorType(node)
	}
	if found != "float" {
		return HighlightUnexpectedType(node, "float", found)
	}
	return []protocol.Diagnostic{}
}

func (s FloatType) TypeName() string {
	return "float"
}
