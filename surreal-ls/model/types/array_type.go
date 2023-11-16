package types

import (
	"fmt"

	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type ArrayType struct {
	ElementType ValueType
}

func (s ArrayType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	arr, ok := t.(ArrayType)
	if !ok {
		return false
	}
	return s.ElementType.IsInstanceOf(arr.ElementType)
}

func (s ArrayType) String() string {
	return fmt.Sprintf("array<%v>", s.ElementType.String())
}

func (s ArrayType) HighlightIssues(node *sitter.Node) []protocol.Diagnostic {
	found := ParseType(node)
	if found.String() == "error" {
		return HighlightErrorType(node)
	}
	if found.TypeName() != "array" {
		return HighlightUnexpectedType(node, "array", found.String())
	}
	elementIssues := []protocol.Diagnostic{}
	for i := 0; i < int(node.NamedChildCount()); i++ {
		child := node.NamedChild(i)
		elementIssues = append(elementIssues, s.ElementType.HighlightIssues(child)...)
	}
	return elementIssues
}

func (s ArrayType) TypeName() string {
	return "array"
}
