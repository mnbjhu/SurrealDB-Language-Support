package model

import sitter "github.com/smacker/go-tree-sitter"

type DeleteStatement struct {
	Node  *sitter.Node
	Table *TableName
	Where *Value
}
