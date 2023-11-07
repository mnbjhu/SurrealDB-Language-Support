#!/bin/bash

cp -f ../tree-sitter-surql/src/parser.c ./bindings/parser.c || exit 1
cp -f ../tree-sitter-surql/src/tree_sitter/parser.h ./bindings/tree_sitter/parser.h || exit 1

go build
