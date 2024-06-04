package tree_sitter_playdate_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-playdate"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_playdate.Language())
	if language == nil {
		t.Errorf("Error loading Playdate grammar")
	}
}
