package model

import sitter "github.com/smacker/go-tree-sitter"

type FieldName struct {
	Node *sitter.Node
	Name string
}
