package tree_sitter_goctl_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-goctl"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_goctl.Language())
	if language == nil {
		t.Errorf("Error loading Goctl grammar")
	}
}
