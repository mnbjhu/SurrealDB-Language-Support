package features

import (
	"fmt"

	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/features/diagnostics"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
	"golang.org/x/exp/slices"
)

func Completion(context *glsp.Context, params *protocol.CompletionParams) (any, error) {
	current_node := FindNodeByPosition(params.Position)
	if current_node == nil {
		context.Notify("window/logMessage", protocol.LogMessageParams{
			Type:    protocol.MessageTypeWarning,
			Message: "Current node is nil",
		})
	}
	message := fmt.Sprintf("Node: %v, Position %v", current_node, params.Position)
	context.Notify("window/logMessage", protocol.LogMessageParams{
		Type:    protocol.MessageTypeWarning,
		Message: message,
	})

	if current_node.Type() == "ERROR" && current_node.Parent().Type() == "ERROR" {
		kind := protocol.CompletionItemKindKeyword
		return []protocol.CompletionItem{
			{
				Label: "select",
				Kind:  &kind,
			},
			{
				Label: "create",
				Kind:  &kind,
			},
			{
				Label: "delete",
				Kind:  &kind,
			},
			{
				Label: "update",
				Kind:  &kind,
			},
			{
				Label: "define",
				Kind:  &kind,
			},
		}, nil
	}

	if current_node.Type() == "ERROR" && current_node.Parent().Type() == "ERROR" {
		if current_node.PrevSibling().Type() == "select_part" {
			kind := protocol.CompletionItemKindKeyword
			return []protocol.CompletionItem{
				{
					Label: "from",
					Kind:  &kind,
				},
			}, nil
		}

		if current_node.PrevSibling().Type() == "from_part" {
			kind := protocol.CompletionItemKindKeyword
			return []protocol.CompletionItem{
				{
					Label: "where",
					Kind:  &kind,
				},
			}, nil
		}

		if current_node.PrevSibling().Type() == "create_part" || current_node.PrevSibling().Type() == "update_part" {
			kind := protocol.CompletionItemKindKeyword
			return []protocol.CompletionItem{
				{
					Label: "content",
					Kind:  &kind,
				},
			}, nil
		}

	}

	if current_node.Type() == "identifier" && slices.Contains([]string{"create_part", "update_part", "delete_part", "from_part"}, current_node.Parent().Type()) {
		items := []protocol.CompletionItem{}
		kind := protocol.CompletionItemKindField
		typeName := "table"
		for _, def := range FindTableDefinitions() {
			name := def.Content([]byte(data.Text))
			fields := FindFieldDefinitionsForTable(name)
			docs := def.Parent().Parent().Content([]byte(data.Text))
			for _, field := range fields {
				docs += fmt.Sprintf("\n- %v", field.Parent().Parent().Content([]byte(data.Text)))
			}
			items = append(items, protocol.CompletionItem{
				Label:  name,
				Kind:   &kind,
				Detail: &typeName,
				Documentation: &protocol.MarkupContent{
					Kind:  protocol.MarkupKindMarkdown,
					Value: docs,
				},
			})
		}
		return items, nil
	}

	if current_node.Type() == "field_name" && current_node.Parent().Type() != "field_definition" {
		items := []protocol.CompletionItem{}
		kind := protocol.CompletionItemKindField
		for _, def := range FindFieldDefinitions() {
			name := def.Content([]byte(data.Text))
			items = append(items, protocol.CompletionItem{
				Label: name,
				Kind:  &kind,
			})
		}
		return items, nil
	}

	if current_node.Type() == "UNEXPECTED" {
		prev := current_node.PrevSibling()
		first := current_node.Parent().Child(0)
		for _, expectedType := range diagnostics.Statements {
			if expectedType[0].Name == first.Type() {
				for index, item := range expectedType {
					if item.Name == prev.Type() {
						return []protocol.CompletionItem{
							{
								Label: expectedType[index+1].Name,
							},
						}, nil
					}
				}
			}
		}
	}

	return nil, nil
}

func IsCrudStatement(node *sitter.Node) bool {
	if node.Type() == "crud_statement" {
		return true
	}
	if node.ChildCount() == 0 {
		return false
	}
	if node.Type() == "ERROR" {
		first := node.Child(0).Type()
		if slices.Contains([]string{"create_part", "update_part", "delete_part", "from_part"}, first) {
			return true
		}
	}
	return false
}

func GetSuggestions(node *sitter.Node) []protocol.CompletionItem {
	if IsCrudStatement(node) {
	}
	return []protocol.CompletionItem{}
}

func ShouldExpectTableName(node *sitter.Node) bool {
	if node.Type() == "identifier" && node.Parent().Type() == "from_part" {
		return true
	}
	return false
}
