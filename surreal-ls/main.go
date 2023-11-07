package main

import (
	"log"
	"os"

	"github.com/mnbjhu/surql-lsp/bindings"
	"github.com/mnbjhu/surql-lsp/data"
	"github.com/mnbjhu/surql-lsp/features"
	"github.com/mnbjhu/surql-lsp/features/filesync"
	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
	"github.com/tliron/glsp/server"

	// Must include a backend implementation
	// See CommonLog for other options: https://github.com/tliron/commonlog
	_ "github.com/tliron/commonlog/simple"
)

const lsName = "mylang"

var (
	Version string = "0.0.1"
	Handler protocol.Handler
)

func main() {
	// Create a logger which outputs to '/tmp/mylang.log'

	file, err := os.OpenFile("/tmp/mylang.log", os.O_CREATE|os.O_WRONLY|os.O_APPEND, 0666)
	if err != nil {
		log.Fatal(err)
	}
	data.Logger = *log.New(file, "", log.LstdFlags)
	data.Parser = sitter.NewParser()
	data.Parser.SetLanguage(bindings.GetLanguage())
	Handler = protocol.Handler{
		Initialize:             initialize,
		TextDocumentDidOpen:    filesync.DidOpen,
		TextDocumentDidChange:  filesync.DidChange,
		Initialized:            filesync.Initialized,
		Shutdown:               filesync.Shutdown,
		SetTrace:               setTrace,
		TextDocumentDidSave:    save,
		TextDocumentDefinition: features.TextDocumentDefinition,
		TextDocumentReferences: features.TextDocumentReferences,
		TextDocumentCompletion: features.Completion,
	}
	server := server.NewServer(&Handler, lsName, false)
	server.RunStdio()
}

func save(context *glsp.Context, params *protocol.DidSaveTextDocumentParams) error {
	context.Notify("window/logMessage", protocol.LogMessageParams{
		Type:    protocol.MessageTypeInfo,
		Message: "File saved",
	})

	return nil
}

func initialize(context *glsp.Context, params *protocol.InitializeParams) (any, error) {
	capabilities := Handler.CreateServerCapabilities()

	resolveProvider := true
	capabilities.TextDocumentSync = protocol.TextDocumentSyncKindIncremental
	capabilities.DeclarationProvider = true
	workDoneProgress := true
	capabilities.CompletionProvider = &protocol.CompletionOptions{
		TriggerCharacters: []string{"[a-zA-Z]"},
		ResolveProvider:   &resolveProvider,
		WorkDoneProgressOptions: protocol.WorkDoneProgressOptions{
			WorkDoneProgress: &workDoneProgress,
		},
	}
	capabilities.DefinitionProvider = protocol.DefinitionOptions{
		WorkDoneProgressOptions: protocol.WorkDoneProgressOptions{
			WorkDoneProgress: &workDoneProgress,
		},
	}

	capabilities.ReferencesProvider = protocol.ReferenceOptions{
		WorkDoneProgressOptions: protocol.WorkDoneProgressOptions{
			WorkDoneProgress: &workDoneProgress,
		},
	}

	return protocol.InitializeResult{
		Capabilities: capabilities,
		ServerInfo: &protocol.InitializeResultServerInfo{
			Name:    lsName,
			Version: &Version,
		},
	}, nil
}

func setTrace(context *glsp.Context, params *protocol.SetTraceParams) error {
	protocol.SetTraceValue(params.Value)
	return nil
}
