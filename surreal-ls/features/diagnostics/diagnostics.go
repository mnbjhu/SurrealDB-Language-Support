package diagnostics

import (
	"fmt"

	sitter "github.com/smacker/go-tree-sitter"
	"github.com/tliron/glsp"
	protocol "github.com/tliron/glsp/protocol_3_16"
)

func UpdateDiagnostics(context *glsp.Context, uri protocol.DocumentUri) {
	errs := HandleUnknownStatements()
	errs = append(errs, HandleStatementErrors(context)...)
	context.Notify("textDocument/publishDiagnostics", protocol.PublishDiagnosticsParams{
		URI:         uri,
		Diagnostics: errs,
	})
}

//	func UpdateDiagnostics(context *glsp.Context, uri protocol.DocumentUri) {
//		diagnostics := []protocol.Diagnostic{}
//		statement := data.Tree.RootNode().Child(0)
//		for {
//			if statement == nil {
//				break
//			}
//			if statement.Type() == "ERROR" {
//				if statement.ChildCount() > 0 && statement.Child(0).Type() != "ERROR" {
//					for _, statementType := range Statements {
//						diagnostics = append(diagnostics, handleStatementDiagnostics(statementType[0].Name, statementType, statement, "")...)
//					}
//				} else {
//					diagnostics = append(diagnostics, NewErrorDiagnostic(statement, "Unknown statement"))
//				}
//			}
//			statement = statement.NextNamedSibling()
//		}
//		context.Notify("textDocument/publishDiagnostics", protocol.PublishDiagnosticsParams{
//			URI:         uri,
//			Diagnostics: diagnostics,
//		})
//	}
func NewErrorDiagnostic(node *sitter.Node, message string) protocol.Diagnostic {
	return protocol.Diagnostic{
		Range: protocol.Range{
			Start: protocol.Position{
				Line:      uint32(node.StartPoint().Row),
				Character: uint32(node.StartPoint().Column),
			},
			End: protocol.Position{
				Line:      uint32(node.EndPoint().Row),
				Character: uint32(node.EndPoint().Column),
			},
		},
		Message: message,
	}
}

func handleStatementDiagnostics(keyword string, expextedTypes []ExpectedType, node *sitter.Node, message string) []protocol.Diagnostic {
	diagnostics := []protocol.Diagnostic{}
	for index, expectedType := range expextedTypes {
		current := node.Child(index)
		if current == nil {
			diagnostics = append(diagnostics, NewErrorDiagnostic(node, fmt.Sprintf("Expected %v", expextedTypes[index].Message)))
			break
		}
		if current.Type() != expectedType.Name {
			if index == 0 {
				return diagnostics
			}
			diagnostics = append(diagnostics, protocol.Diagnostic{
				Range: protocol.Range{
					Start: protocol.Position{
						Line:      uint32(current.StartPoint().Row),
						Character: uint32(current.StartPoint().Column),
					},
					End: protocol.Position{
						Line:      uint32(current.EndPoint().Row),
						Character: uint32(current.EndPoint().Column),
					},
				},
				Message: fmt.Sprintf("Expected %v, but found %v", expectedType.Message, current.Type()),
			})
			break
		}
		current = current.NextSibling()
		if current == nil {
			if len(expextedTypes) != index+1 {
				diagnostics = append(diagnostics, NewErrorDiagnostic(node, fmt.Sprintf("Expected %v", expextedTypes[index+1].Message)))
			}
		}
	}
	return diagnostics
}

type ExpectedType struct {
	Name    string
	Message string
}

var Statements = [][]ExpectedType{
	{
		{
			Name:    "select_token",
			Message: "select",
		},
		{
			Name:    "projections",
			Message: "projections",
		},
		ExpectedType{
			Name:    "from_token",
			Message: "from",
		},
		ExpectedType{
			Name:    "table_name",
			Message: "tables",
		},
	},
}
