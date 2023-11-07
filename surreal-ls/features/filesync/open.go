package filesync

import (
	"context"

	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/features/diagnostics"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func DidOpen(ctx *glsp.Context, params *protocol.DidOpenTextDocumentParams) error {
	newTree, err := data.Parser.ParseCtx(context.Background(), nil, []byte(params.TextDocument.Text))
	if err != nil {
		panic(err)
	}
	data.Tree = newTree
	data.Text = params.TextDocument.Text
	diagnostics.UpdateDiagnostics(ctx, params.TextDocument.URI)
	return nil
}
