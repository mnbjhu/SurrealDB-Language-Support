package features

import (
	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/model/definitions"
	"github.com/mnbjhu/surql-lsp/model/references"
	"github.com/mnbjhu/surql-lsp/util"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func TextDocumentDefinition(context *glsp.Context, params *protocol.DefinitionParams) (any, error) {
	node := data.FindNodeByPosition(params.Position)
	if node.Type() == "identifier" {
		switch references.GetIdentifierType(node) {
		case "table":
			defs := definitions.FindTableDef(node.Content([]byte(data.Text)))
			if len(defs) == 0 {
				return nil, nil
			}
			return protocol.Location{
				URI:   params.TextDocument.URI,
				Range: util.GetRange(defs[0].Node),
			}, nil
		}
	}
	return nil, nil
}
