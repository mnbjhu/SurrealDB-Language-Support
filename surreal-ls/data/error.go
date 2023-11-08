package data

import sitter "github.com/smacker/go-tree-sitter"

type NotFoundError struct {
	name string
}

func (e *NotFoundError) Error() string {
	return "Table " + e.name + " not found"
}

type DuplicateDefinition struct {
	definitions []*sitter.Node
}

// Error implements error.
func (*DuplicateDefinition) Error() string {
	return "Duplicate definition"
}
