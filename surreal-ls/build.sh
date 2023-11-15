#!/bin/bash

echo "Generating tree-sitter parser"
cd ../tree-sitter-surql || exit
tree-sitter generate
cd ../surreal-ls || exit

echo "Copying tree-sitter parser"
mkdir -p bindings/tree_sitter
cp -f ../tree-sitter-surql/src/parser.c ./bindings/parser.c
cp -f ../tree-sitter-surql/src/tree_sitter/parser.h ./bindings/tree_sitter/parser.h

echo "Building"
go build
