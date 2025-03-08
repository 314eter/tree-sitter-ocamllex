package tree_sitter_ocamllex_test

import (
	"testing"

	tree_sitter_ocamllex "github.com/314eter/tree-sitter-ocamllex/bindings/go"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ocamllex.Language())
	if language == nil {
		t.Errorf("Error loading OCamllex grammar")
	}
}
