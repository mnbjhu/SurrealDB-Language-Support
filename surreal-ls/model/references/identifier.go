package references

import sitter "github.com/smacker/go-tree-sitter"

func GetIdentifierType(node *sitter.Node) string {
	parent := node.Parent()
	if parent == nil {
		return "unknown"
	}
	switch parent.Type() {
	case "type_identifier", "generic_type":
		return "type"
	case "from", "create", "update", "delete", "table":
		return "table"
	case "function_identifier":
		return "function"
	case "variable":
		return "variable"
	default:
		return "field"
	}
}
