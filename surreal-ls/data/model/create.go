package model

import (
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type CreateStatement struct {
	Node    *sitter.Node
	Name    *TableName
	Content *Value
}

func IsCreateStatement(node *sitter.Node) bool {
	if node.Type() == "crud_statement" || node.Type() == "ERROR" {
		createPart := node.Child(0)
		if createPart != nil {
			return createPart.Type() == "create_part"
		}
	}
	return false
}

func ParseCreateStatement(node *sitter.Node) (CreateStatement, []*protocol.Diagnostic) {
	statement := CreateStatement{Node: node}
	var diagnostics []*protocol.Diagnostic
	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)
		switch child.Type() {
		case "create_part":
			name, err := ParseTableName(child)
			diagnostics = append(diagnostics, err)
			statement.Name = &name
		case "value":
			value, err := ParseValue(child)
			diagnostics = append(diagnostics, err)
			statement.Content = &value
		}
	}
}
