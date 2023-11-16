package data

import (
	"fmt"

	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/util"
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
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

func FindNodeByPosition(position protocol.Position) *sitter.Node {
	point := position.IndexIn(Text)
	current := Tree.RootNode()
	for {
		if current.ChildCount() == 0 {
			break
		}
		var i uint32 = 0
		for {
			if i == current.ChildCount() {
				break
			}
			child := current.Child(int(i))
			start := util.ParsePosition(child.StartPoint()).IndexIn(Text)
			end := util.ParsePosition(child.EndPoint()).IndexIn(Text)
			if start <= point && point <= end {
				current = child
				break
			}
			i++
		}
	}
	return current
}
