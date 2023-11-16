package definitions

import (
	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/model/types"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type TableDef struct {
	Node *sitter.Node
}

func (s TableDef) NameNode() (*sitter.Node){
	return s.Node.NamedChild(1).NamedChild(0)
}

func (s TableDef) Name() string {
	return s.Node.NamedChild(1).NamedChild(0).Content([]byte(data.Text))
}

func FindAllTableDefs() []TableDef {
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
		found = append(found, TableDef{Node: m.Captures[0].Node.Parent().Parent()})
	}
	return found
}

func (t TableDef) Type(context *glsp.Context) types.ValueType {
	fieldDefs := FindFieldDefsForTable(t.Name())
	properties := map[string]types.ValueType{}
	for _, fieldDef := range fieldDefs {
		context.Notify("window/logMessage", protocol.LogMessageParams{
			Type:    protocol.MessageTypeWarning,
			Message: "Getting type for " + fieldDef.Node.String(),
		})
		properties[fieldDef.Name()] = fieldDef.Type(context)
	}
	return types.ObjectType{Properties: properties}
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
			found = append(found, TableDef{Node: m.Captures[0].Node.Parent().Parent()})
		}
	}
	return found
}
