package types

import (
	"github.com/mnbjhu/surql-lsp/data"
	sitter "github.com/smacker/go-tree-sitter"
)

func ParsePrimitiveType(node *sitter.Node) ValueType {
	switch node.Type() {
	case "string":
		return StringType{}
	case "integer":
		return IntType{}
	case "float":
		return FloatType{}
	case "boolean":
		return BooleanType{}
	}
	return nil
}

func ParseArrayType(node *sitter.Node) ValueType {
	if node.NamedChildCount() == 0 {
		return ArrayType{NothingType{}}
	}
	innerType := ParseType(node.NamedChild(0))
	for i := 0; i < int(node.NamedChildCount()); i++ {
		if ParseType(node.NamedChild(i)).IsInstanceOf(innerType) {
			continue
		} else {
			if innerType.String() == "nothing" {
				innerType = ParseType(node.NamedChild(i))
				continue
			} else {
				innerType = AnyType{}
				break
			}
		}
	}
	return ArrayType{innerType}
}

func ParseType(node *sitter.Node) ValueType {
	if node.Type() == "array" {
		return ParseArrayType(node)
	}
	if node.Type() == "object" {
		return ParseObjectType(node)
	}
	primaryType := ParsePrimitiveType(node)
	if primaryType != nil {
		return primaryType
	}
	return ErrorType{}
}

func ParseObjectType(node *sitter.Node) ValueType {
	properties := map[string]ValueType{}
	for i := 0; i < int(node.NamedChildCount()); i++ {
		child := node.NamedChild(i)
		if child.Type() == "object_entry" && child.NamedChildCount() == 2 {
			keyNode := child.NamedChild(0)
			valueNode := child.NamedChild(1)
			if keyNode.Type() != "identifier" {
				return ErrorType{}
			}
			key := keyNode.Content([]byte(data.Text))
			properties[key] = ParseType(valueNode)
		} else {
			return ErrorType{}
		}
	}
	return ObjectType{Properties: properties}
}
