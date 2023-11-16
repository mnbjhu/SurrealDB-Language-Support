package features

import (
	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/model/definitions"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
	"golang.org/x/exp/slices"
)

var statement_starts = []string{
	"select",
	"insert",
	"update",
	"delete",
	"create",
	"define",
	"let",
}

var tranforms = []string{
	"where",
	"order by",
	"limit",
	"skip",
}

var TypeNames = []string{
	"string",
	"int",
	"float",
	"boolean",
	"array",
	"object",
	"any",
}

func Completion(context *glsp.Context, params *protocol.CompletionParams) (any, error) {
	current_node := data.FindNodeByPosition(params.Position)
	switch current_node.Type() {
	case "ERROR":
		if current_node.Parent().Type() == "ERROR" {
			return completeErrorItem(current_node.Parent()), nil
		}
	case "identifier":
		return completeIdentifierItem(current_node, context), nil
	}

	return nil, nil
}

func completeErrorItem(node *sitter.Node) []protocol.CompletionItem {
	kind := protocol.CompletionItemKindKeyword
	completions := []protocol.CompletionItem{}
	childCount := node.NamedChildCount()
	if childCount == 1 && node.NamedChild(0).Type() == "ERROR" {
		for _, start := range statement_starts {
			completions = append(completions, protocol.CompletionItem{
				Label: start,
				Kind:  &kind,
			})
		}
	}

	if childCount == 2 {
		switch node.NamedChild(0).Type() {
		case "select":
			completions = append(completions, protocol.CompletionItem{
				Label: "from",
				Kind:  &kind,
			})
		case "create":
			completions = append(completions, protocol.CompletionItem{
				Label: "content",
				Kind:  &kind,
			})
		case "update":
			completions = append(completions, protocol.CompletionItem{
				Label: "content",
				Kind:  &kind,
			})
		case "define":
			completions = append(completions, protocol.CompletionItem{
				Label: "table",
				Kind:  &kind,
			})
			completions = append(completions, protocol.CompletionItem{
				Label: "field",
				Kind:  &kind,
			})
			completions = append(completions, protocol.CompletionItem{
				Label: "function",
				Kind:  &kind,
			})

		case "delete":
			completions = append(completions, getAvailableTransforms(node)...)
		}
	}

	if childCount > 2 {
		transforms := getAvailableTransforms(node)
		type_name := node.NamedChild(1).Type()
		if type_name == "from" || type_name == "content" {
			completions = append(completions, transforms...)
		}
	}
	return completions
}

func getAvailableTransforms(node *sitter.Node) []protocol.CompletionItem {
	available := []protocol.CompletionItem{}
	kind := protocol.CompletionItemKindKeyword
	for _, transform := range tranforms {
		if !hasTransform(node, transform) {
			available = append(available,
				protocol.CompletionItem{
					Label: transform,
					Kind:  &kind,
				},
			)
		}
	}
	return available
}

func hasTransform(node *sitter.Node, transform string) bool {
	for i := 0; i < int(node.NamedChildCount()); i++ {
		if node.NamedChild(i).Type() == transform {
			return true
		}
	}
	return false
}

func completeIdentifierItem(node *sitter.Node, context *glsp.Context) []protocol.CompletionItem {
	parent := node.Parent()
	parent_type := parent.Type()
	completions := []protocol.CompletionItem{}
	if parent_type == "type_identifier" {
		kind := protocol.CompletionItemKindTypeParameter
		for _, t := range TypeNames {
			completions = append(completions, protocol.CompletionItem{
				Label: t,
				Kind:  &kind,
			})
		}
	}
	if slices.Contains([]string{"from", "update", "create", "delete"}, parent_type) {
		kind := protocol.CompletionItemKindStruct
		for _, table := range definitions.FindAllTableDefs() {
			context.Notify("window/logMessage", protocol.LogMessageParams{
				Type:    protocol.MessageTypeWarning,
				Message: "Adding completion for " + table.Node.String(),
			})

			name := table.Name()
			type_name := table.Type(context).String()
			completions = append(completions, protocol.CompletionItem{
				Label:  name,
				Kind:   &kind,
				Detail: &type_name,
			})
		}
	}
	return completions
}
