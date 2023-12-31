package definitions

import (
	"strings"

	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/model/types"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

type FieldDef struct {
	Node *sitter.Node
}

func (s FieldDef) Name() string {
	full_name := s.Node.NamedChild(1).NamedChild(0).Content([]byte(data.Text))
	parts := strings.Split(full_name, ".")
	return parts[len(parts)-1]
}

func (s FieldDef) FullName() string {
	return s.Node.NamedChild(1).NamedChild(0).Content([]byte(data.Text))
}

func (s FieldDef) TableName() string {
	return s.Node.NamedChild(2).NamedChild(0).Content([]byte(data.Text))
}

func GetTypeForField(field FieldDef, typeNode *sitter.Node, context *glsp.Context) types.ValueType {
	context.Notify("window/logMessage", protocol.LogMessageParams{
		Type:    protocol.MessageTypeWarning,
		Message: "Getting (field) type for " + typeNode.String(),
	})
	if typeNode.NamedChild(0).Type() == "identifier" {
		typeName := typeNode.Content([]byte(data.Text))
		switch typeName {
		case "string":
			return types.StringType{}
		case "int":
			return types.IntType{}
		case "float":
			return types.FloatType{}
		case "any":
			return types.AnyType{}
		case "boolean":
			return types.BooleanType{}
		case "object":
			fieldDefs := FindFieldDefsForField(field.TableName(), field.FullName())
			properties := map[string]types.ValueType{}
			for _, fieldDef := range fieldDefs {
				properties[fieldDef.Name()] = fieldDef.Type(context)
			}
			return types.ObjectType{Properties: properties}
		}
	} else {
		if typeNode.NamedChild(0).Type() == "generic_type" {
			outerType := typeNode.NamedChild(0).NamedChild(0).Content([]byte(data.Text))
			innerType := GetTypeForField(field, typeNode.NamedChild(0).NamedChild(1), context)

			if outerType == "array" {
				return types.ArrayType{ElementType: innerType}
			}
		}
	}
	return types.ErrorType{}
}

func (s FieldDef) Type(context *glsp.Context) types.ValueType {
	return GetTypeForField(s, s.Node.NamedChild(3).NamedChild(0), context)
}

func FindFieldDef(table string, field string) []FieldDef {
	query, err := sitter.NewQuery([]byte("((define) . (field (field_name) @field_name) (on (identifier) @table_name))"), bindings.GetLanguage())
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
		if m.Captures[1].Node.Content([]byte(data.Text)) == table && m.Captures[0].Node.Content([]byte(data.Text)) == field {
			found = append(found, FieldDef{Node: m.Captures[1].Node.Parent().Parent()})
		}
	}
	return found
}

func FindFieldDefsForTable(table string) []FieldDef {
	query, err := sitter.NewQuery([]byte("((define) . (field (field_name) @field_name) (on (identifier) @table_name) (type (type_identifier)))"), bindings.GetLanguage())
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
		if m.Captures[1].Node.Content([]byte(data.Text)) == table {
			if !strings.Contains(m.Captures[0].Node.Content([]byte(data.Text)), ".") {
				found = append(found, FieldDef{Node: m.Captures[0].Node.Parent().Parent()})
			}
		}
	}
	return found
}

func FindFieldDefsForField(table string, field string) []FieldDef {
	query, err := sitter.NewQuery([]byte("((define) . (field (field_name) @field_name) (on (identifier) @table_name) (type (type_identifier)))"), bindings.GetLanguage())
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
		if m.Captures[1].Node.Content([]byte(data.Text)) == table {
			fieldName := m.Captures[0].Node.Content([]byte(data.Text))
			if strings.HasPrefix(fieldName, field+".") {
				name := strings.TrimPrefix(fieldName, field+".")
				if !strings.Contains(name, ".") {
					found = append(found, FieldDef{Node: m.Captures[0].Node.Parent().Parent()})
				}
			}
		}
	}
	return found
}
