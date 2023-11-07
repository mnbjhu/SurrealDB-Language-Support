package data

import (
	"fmt"

	"github.com/mnbjhu/surql-lsp/bindings"
	sitter "github.com/smacker/go-tree-sitter"
)

var Tree *sitter.Tree

func GetFindTokensByName(name string) []*sitter.Node {
	query, err := sitter.NewQuery([]byte(fmt.Sprintf("(%s) @err", name)), bindings.GetLanguage())
	found := []*sitter.Node{}
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, Tree.RootNode())
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		for _, c := range m.Captures {
			found = append(found, c.Node)
		}
	}
	return found
}
