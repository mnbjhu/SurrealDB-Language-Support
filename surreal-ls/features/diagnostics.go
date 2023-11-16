package features

import (
	"github.com/mnbjhu/surql-lsp/model/diagnostics"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func UpdateDiagnostics(context *glsp.Context, uri protocol.DocumentUri) {
	errs := diagnostics.HandleUnknownStatements()
	errs = append(errs, diagnostics.HandleStatements(context)...)
	context.Notify("textDocument/publishDiagnostics", protocol.PublishDiagnosticsParams{
		URI:         uri,
		Diagnostics: errs,
	})
}
