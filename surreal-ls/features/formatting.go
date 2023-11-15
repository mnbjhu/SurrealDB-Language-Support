package features

import (
	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func Formatting(context *glsp.Context, params *protocol.DocumentFormattingParams) ([]protocol.TextEdit, error) {
	return formatObjects(context)
}

func formatObjects(context *glsp.Context) ([]protocol.TextEdit, error) {
	query, err := sitter.NewQuery([]byte("(object) @object"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, data.Tree.RootNode())
	found := []protocol.TextEdit{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		object := m.Captures[0].Node
		start := object.StartPoint()
		start = sitter.Point{Row: start.Row, Column: start.Column + 1}
		current := object.Parent()
		indentCount := 0
		for {
			if current == nil {
				break
			}
			if current.Type() == "object" {
				indentCount++
			}
			current = current.Parent()
		}
		indent := ""
		for i := 0; i < indentCount; i++ {
			indent += "\t"
		}

		for i := 0; i < int(object.NamedChildCount()); i++ {
			child := object.NamedChild(i)
			if i == 0 {
				found = append(found, protocol.TextEdit{
					Range: protocol.Range{
						Start: ParsePosition(start),
						End:   ParsePosition(child.StartPoint()),
					},
					NewText: "\n\t" + indent,
				})
			} else {
				found = append(found, protocol.TextEdit{
					Range: protocol.Range{
						Start: ParsePosition(start),
						End:   ParsePosition(child.StartPoint()),
					},
					NewText: ",\n\t" + indent,
				})
			}
			start = child.EndPoint()
			if i == int(object.NamedChildCount())-1 {
				found = append(found, protocol.TextEdit{
					Range: protocol.Range{
						Start: ParsePosition(start),
						End:   ParsePosition(object.EndPoint()),
					},
					NewText: "\n" + indent + "}",
				})
			}
		}
	}
	return found, nil
}
