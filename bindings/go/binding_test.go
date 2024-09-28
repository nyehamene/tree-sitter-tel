package tree_sitter_tel_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-tel"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tel.Language())
	if language == nil {
		t.Errorf("Error loading Tel grammar")
	}
}
