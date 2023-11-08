package data

import (
	"strings"

	"github.com/mnbjhu/surql-lsp/bindings"
	sitter "github.com/smacker/go-tree-sitter"
)

func FindTableDefByName(name string) (*sitter.Node, error) {
	query, err := sitter.NewQuery([]byte("(definition_statement (table_part (identifier) @table_name))"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, Tree.RootNode())
	found := []*sitter.Node{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		for _, c := range m.Captures {
			if c.Node.Content([]byte(Text)) == name {
				found = append(found, c.Node)
			}
		}
	}
	if len(found) == 1 {
		return found[0], nil
	}
	if len(found) > 1 {
		return nil, &DuplicateDefinition{found}
	}
	return nil, &NotFoundError{name}
}

func FindFieldDefByName(table string, name string) (*sitter.Node, error) {
	query, err := sitter.NewQuery([]byte("(definition_statement (field_part (field_name) @field_name) (on_part (identifier) @table_name))"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, Tree.RootNode())
	found := []*sitter.Node{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		if m.Captures[1].Node.Content([]byte(Text)) == table && m.Captures[0].Node.Content([]byte(Text)) == name {
			found = append(found, m.Captures[0].Node)
		}
	}
	if len(found) == 1 {
		return found[0], nil
	}
	if len(found) > 1 {
		return nil, &DuplicateDefinition{found}
	}
	return nil, &NotFoundError{name}
}

func FindFieldDefsForTable(table string) []*sitter.Node {
	query, err := sitter.NewQuery([]byte("(definition_statement (field_part (field_name) @field_name) (on_part (identifier) @table_name))"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, Tree.RootNode())
	found := []*sitter.Node{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		if m.Captures[1].Node.Content([]byte(Text)) == table {
			if !strings.Contains(m.Captures[0].Node.Content([]byte(Text)), ".") {
				found = append(found, m.Captures[0].Node)
			}
		}
	}
	return found
}

func FindFieldDefsForField(table string, field string) []*sitter.Node {
	query, err := sitter.NewQuery([]byte("(definition_statement (field_part (field_name) @field_name) (on_part (identifier) @table_name))"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, Tree.RootNode())
	found := []*sitter.Node{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		if m.Captures[1].Node.Content([]byte(Text)) == table {
			full_name := m.Captures[0].Node.Content([]byte(Text))
			name := strings.TrimPrefix(full_name, field+".")
			if strings.Contains(name, ".") && strings.HasPrefix(full_name, field) {
				found = append(found, m.Captures[0].Node)
			}
		}
	}
	return found
}
