package model

import sitter "github.com/smacker/go-tree-sitter"

type SelectStatement struct {
	Node        *sitter.Node
	Projections []*Value
	From        *TableName
	Where       *Value
}
