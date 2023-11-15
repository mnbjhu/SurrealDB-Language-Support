package features

import (
	"fmt"
	"strings"

	"github.com/mnbjhu/surql-lsp/data"
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func HighlightErrorType(node *sitter.Node) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityWarning
	return []protocol.Diagnostic{
		{
			Range:    GetRange(node),
			Severity: &err,
			Message:  "Could not infer type",
		},
	}
}

func HighlightUnexpectedType(node *sitter.Node, expected string, found string) []protocol.Diagnostic {
	err := protocol.DiagnosticSeverityError
	return []protocol.Diagnostic{
		{
			Range:    GetRange(node),
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

type ObjectType struct {
	Properties map[string]ValueType
}

func (s ObjectType) IsInstanceOf(t ValueType) bool {
	if t.String() == "any" {
		return true
	}
	obj, ok := t.(ObjectType)
	if !ok {
		return false
	}
	for key, value := range s.Properties {
		expected := obj.Properties[key]
		if expected == nil {
			return false
		}
		if !value.IsInstanceOf(expected) {
			return false
		}
	}
	return true
}

func (s ObjectType) String() string {
	body := ""
	for key, value := range s.Properties {
		body += fmt.Sprintf("\n%v: %v", key, value.String())
	}
	return fmt.Sprintf("{%v\n}", indent(body))
}

func (s ObjectType) HighlightIssues(node *sitter.Node) []protocol.Diagnostic {
	found := ParseType(node)
	propertyIssues := []protocol.Diagnostic{}
	if found.String() == "error" {
		propertyIssues = append(propertyIssues, HighlightErrorType(node)...)
	}
	if found.TypeName() != "object" {
		return HighlightUnexpectedType(node, "object", found.String())
	}
	err := protocol.DiagnosticSeverityError
	keysFound := []string{}
	for i := 0; i < int(node.NamedChildCount()); i++ {
		objectEntry := node.NamedChild(i)
		key := objectEntry.NamedChild(0)
		if key == nil {
			propertyIssues = append(propertyIssues, protocol.Diagnostic{
				Range:    GetRange(objectEntry),
				Severity: &err,
				Message:  "Expected a property name",
			})
			continue
		}
		propName := key.Content([]byte(data.Text))
		keysFound = append(keysFound, propName)
		value := objectEntry.NamedChild(1)
		if value == nil {
			propertyIssues = append(propertyIssues, protocol.Diagnostic{
				Range:    GetRange(objectEntry),
				Severity: &err,
				Message:  "Expected a value",
			})
			continue
		}

		expected := s.Properties[propName]
		if expected == nil {
			propertyIssues = append(propertyIssues, protocol.Diagnostic{
				Range:    GetRange(objectEntry),
				Severity: &err,
				Message:  fmt.Sprintf("Unexpected property '%v'", propName),
			})
			continue
		}
		propertyIssues = append(propertyIssues, expected.HighlightIssues(value)...)
	}
	for key := range s.Properties {
		found := false
		for _, keyFound := range keysFound {
			if keyFound == key {
				found = true
				break
			}
		}
		if !found {
			propertyIssues = append(propertyIssues, protocol.Diagnostic{
				Range:    GetRange(node),
				Severity: &err,
				Message:  fmt.Sprintf("Missing property '%v' (%v)", key, s.Properties[key].String()),
			})
		}
	}

	return propertyIssues
}

func (s ObjectType) TypeName() string {
	return "object"
}

func indent(text string) string {
	lines := strings.Split(text, "\n")
	ret := ""
	for _, line := range lines {
		ret += "\t" + line + "\n"
	}
	return strings.TrimSuffix(ret, "\n")
}

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
