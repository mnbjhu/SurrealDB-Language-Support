package features

import (
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)
func GetDocumentSymbols(context *glsp.Context, params *protocol.DocumentSymbolParams) (any, error) {
	return []protocol.DocumentSymbol{
		{
			Name: "Test Symbol",
			Kind: protocol.SymbolKindField,
		},
	}, nil
}
