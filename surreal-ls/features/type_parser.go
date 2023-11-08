package features

import (
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
	innerType := ParsePrimitiveType(node.Child(0))
	for i := 0; i < int(node.ChildCount()); i++ {
		if ParseType(node.Child(i)).IsInstanceOf(innerType) {
			continue
		} else {
			if innerType.String() == "nothing" {
				innerType = ParseType(node.Child(i))
				continue
			} else {
				innerType = AnyType{}
				break
			}
		}
	}
	return ArrayType{innerType}
}

func ParseObjectType(node *sitter.Node) ValueType {
}

func ParseType(node *sitter.Node) ValueType {
	if node.Type() == "array" {
		return ParseArrayType(node)
	}
	return ParsePrimitiveType(node)
}
