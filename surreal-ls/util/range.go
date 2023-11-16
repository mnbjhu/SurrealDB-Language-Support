package util

import (
	sitter "github.com/smacker/go-tree-sitter"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func GetRange(node *sitter.Node) protocol.Range {
	return protocol.Range{
		Start: ParsePosition(node.StartPoint()),
		End:   ParsePosition(node.EndPoint()),
	}
}

func GetEndRange(node *sitter.Node) protocol.Range {
	return protocol.Range{
		Start: ParsePosition(node.EndPoint()),
		End:   ParsePosition(node.EndPoint()),
	}
}
