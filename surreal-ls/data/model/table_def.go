package model

import sitter "github.com/smacker/go-tree-sitter"

type TableDefinition struct {
	Node *sitter.Node
	Name *TableName
}
