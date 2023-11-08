package model

import sitter "github.com/smacker/go-tree-sitter"

type TableName struct {
	Node *sitter.Node
	Name string
}
