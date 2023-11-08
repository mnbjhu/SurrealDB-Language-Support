package model

import (
	sitter "github.com/smacker/go-tree-sitter"
)

type UpdateStatement struct {
	Node    *sitter.Node
	Table   *TableName
	Content *Value
	Where   *Value
}
