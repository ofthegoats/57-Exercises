// Package main provides ...
package main

import (
	"fmt"
	"strings"
)

func isanagram(word1 string, word2 string) bool {
	if len(word1) != len(word2) {
		return false
	}
	for _, letter := range word1 {
		if !strings.ContainsRune(word2, letter) {
			return false
		}
	}
	return true
}

func main() {
	var word1, word2 string
	fmt.Println("Enter two strings and I'll tell you if they are anagrams: ")
	fmt.Printf("Enter the first string: ")
	fmt.Scanf("%s", &word1)
	fmt.Printf("Enter the second string: ")
	fmt.Scanf("%s", &word2)

	if isanagram(word1, word2) {
		fmt.Printf("\"%s\" and \"%s\" are anagrams.\n", word1, word2)
	} else {
		fmt.Printf("\"%s\" and \"%s\" are not anagrams.\n", word1, word2)
	}
}
