package features

import (
	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func TextDocumentDefinition(context *glsp.Context, params *protocol.DefinitionParams) (any, error) {
	data.Logger.Printf("Declaration: %v", params)
	node := FindNodeByPosition(params.Position)
	data.Logger.Printf("Declaration: %v", node)
	if node.Type() == "table_name" {
		query, err := sitter.NewQuery([]byte("(define_table_statement (table_name) @table_name)"), bindings.GetLanguage())
		if err != nil {
			panic(err)
		}
		cursor := sitter.NewQueryCursor()
		cursor.Exec(query, data.Tree.RootNode())
		found := []protocol.Location{}
		for {
			m, ok := cursor.NextMatch()
			if !ok {
				break
			}
			for _, c := range m.Captures {
				found = append(found, protocol.Location{
					URI: params.TextDocument.URI,
					Range: protocol.Range{
						Start: protocol.Position{
							Line:      uint32(c.Node.StartPoint().Row),
							Character: uint32(c.Node.StartPoint().Column),
						},
						End: protocol.Position{
							Line:      uint32(c.Node.EndPoint().Row),
							Character: uint32(c.Node.EndPoint().Column),
						},
					},
				})
			}
			return found, nil
		}
	}
	return nil, nil
}

func TextDocumentReferences(context *glsp.Context, params *protocol.ReferenceParams) ([]protocol.Location, error) {
	data.Logger.Printf("References: %v", params)
	node := FindNodeByPosition(params.Position)
	data.Logger.Printf("References: %v", node)
	if node.Type() == "identifier" && (node.Parent().Type() == "from_part" || node.Parent().Type() == "create_part" || node.Parent().Type() == "delete_part" || node.Parent().Type() == "update_part") {
		query, err := sitter.NewQuery([]byte("(definition_statement (table_part (identifier) @table_name))"), bindings.GetLanguage())
		if err != nil {
			panic(err)
		}
		cursor := sitter.NewQueryCursor()
		cursor.Exec(query, data.Tree.RootNode())
		found := []protocol.Location{}
		for {
			m, ok := cursor.NextMatch()
			if !ok {
				break
			}
			for _, c := range m.Captures {
				found = append(found, protocol.Location{
					URI: params.TextDocument.URI,
					Range: protocol.Range{
						Start: protocol.Position{
							Line:      uint32(c.Node.StartPoint().Row),
							Character: uint32(c.Node.StartPoint().Column),
						},
						End: protocol.Position{
							Line:      uint32(c.Node.EndPoint().Row),
							Character: uint32(c.Node.EndPoint().Column),
						},
					},
				})
			}
		}
		return found, nil
	}
	return nil, nil
}

func FindTableDefinitions() []*sitter.Node {
	query, err := sitter.NewQuery([]byte("(statement (define) (table (identifier) @def))"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, data.Tree.RootNode())
	found := []*sitter.Node{}
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

func FindFieldDefinitions() []*sitter.Node {
	query, err := sitter.NewQuery([]byte("(define_field_statement (field_name) @field_name)"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, data.Tree.RootNode())
	found := []*sitter.Node{}
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

func FindFieldDefinitionsForTable(table string) []*sitter.Node {
	query, err := sitter.NewQuery([]byte("(definition_statement (field_part (identifier) @field_name) (on_part (identifier) @table_name ))"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, data.Tree.RootNode())
	found := []*sitter.Node{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		if m.Captures[1].Node.Content([]byte(data.Text)) == table {
			found = append(found, m.Captures[0].Node)
		}
	}
	return found
}

func FindNodeByPosition(position protocol.Position) *sitter.Node {
	point := position.IndexIn(data.Text)
	current := data.Tree.RootNode()
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
			start := ParsePosition(child.StartPoint()).IndexIn(data.Text)
			end := ParsePosition(child.EndPoint()).IndexIn(data.Text)
			if start <= point && point <= end {
				current = child
				break
			}
			i++
		}
	}
	return current
}

func ParsePosition(point sitter.Point) protocol.Position {
	return protocol.Position{
		Line:      point.Row,
		Character: point.Column,
	}
}
