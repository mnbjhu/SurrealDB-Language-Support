package filesync

import (
	"context"
	"fmt"

	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/features/diagnostics"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func DidChange(ctx *glsp.Context, params *protocol.DidChangeTextDocumentParams) error {
	data.Logger.Printf("Change: %v", params.ContentChanges)
	for _, change := range params.ContentChanges {
		change := change.(protocol.TextDocumentContentChangeEvent)
		start, end := change.Range.IndexesIn(data.Text)
		data.Logger.Printf("Change: %v, start: %v, end: %v", change, start, end)
		data.Text = fmt.Sprintf("%s%s%s", data.Text[:start], change.Text, data.Text[end:])
		data.Tree.Edit(sitter.EditInput{
			StartIndex:  uint32(start),
			OldEndIndex: uint32(end),
			NewEndIndex: uint32(start + len(change.Text)),
			StartPoint: sitter.Point{
				Row:    uint32(change.Range.Start.Line),
				Column: uint32(change.Range.Start.Character),
			},
			OldEndPoint: sitter.Point{
				Row:    uint32(change.Range.End.Line),
				Column: uint32(change.Range.End.Character),
			},
			NewEndPoint: sitter.Point{
				Row:    uint32(change.Range.End.Line),
				Column: uint32(change.Range.End.Character),
			},
		})
		newTree, err := data.Parser.ParseCtx(context.Background(), data.Tree, []byte(data.Text))
		if err != nil {
			panic(err)
		}
		data.Tree = newTree
	}
	diagnostics.UpdateDiagnostics(ctx, params.TextDocument.URI)
	return nil
}
