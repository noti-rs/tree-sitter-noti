package tree_sitter_noti_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-noti"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_noti.Language())
	if language == nil {
		t.Errorf("Error loading Noti grammar")
	}
}
