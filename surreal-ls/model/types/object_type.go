package types

import (
	"fmt"

	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

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
				Range:    util.GetRange(objectEntry),
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
				Range:    util.GetRange(objectEntry),
				Severity: &err,
				Message:  "Expected a value",
			})
			continue
		}

		expected := s.Properties[propName]
		if expected == nil {
			propertyIssues = append(propertyIssues, protocol.Diagnostic{
				Range:    util.GetRange(objectEntry),
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
				Range:    util.GetRange(node),
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
