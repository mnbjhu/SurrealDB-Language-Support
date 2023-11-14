package features

import (
	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	sitter "github.com/smacker/go-tree-sitter"
)

type FieldDef struct {
	Node *sitter.Node
}

func (s FieldDef) Name() string {
	return s.Node.NamedChild(1).NamedChild(0).Content([]byte(data.Text))
}

func (s FieldDef) TableName() string {
	return s.Node.NamedChild(2).NamedChild(0).Content([]byte(data.Text))
}

func (s FieldDef) Type() ValueType {
	return ParseType(s.Node.NamedChild(3))
}

type TableDef struct {
	Node *sitter.Node
}

func (s TableDef) Name() string {
	return s.Node.NamedChild(1).NamedChild(0).Content([]byte(data.Text))
}

func FindFieldDef(table string, field string) []FieldDef {
	query, err := sitter.NewQuery([]byte("((define) . (field (identifier) @table_name) . (on (field_name) @field_name))"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, data.Tree.RootNode())
	found := []FieldDef{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		if m.Captures[0].Node.Content([]byte(data.Text)) == table && m.Captures[1].Node.Content([]byte(data.Text)) == field {
			found = append(found, FieldDef{Node: m.Captures[1].Node})
		}
	}
	return found
}

func FindTableDef(table string) []TableDef {
	query, err := sitter.NewQuery([]byte("((define) . (table (identifier) @table_name))"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, data.Tree.RootNode())
	found := []TableDef{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		if m.Captures[0].Node.Content([]byte(data.Text)) == table {
			found = append(found, TableDef{Node: m.Captures[0].Node})
		}
	}
	return found
}

func FindFieldDefsForTable(table string) []FieldDef {
	query, err := sitter.NewQuery([]byte("((define) . (field (identifier) @table_name) (on (field_name)))"), bindings.GetLanguage())
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, data.Tree.RootNode())
	found := []FieldDef{}
	for {
		m, ok := cursor.NextMatch()
		if !ok {
			break
		}
		if m.Captures[0].Node.Content([]byte(data.Text)) == table {
			found = append(found, FieldDef{Node: m.Captures[0].Node})
		}
	}
	return found
}
