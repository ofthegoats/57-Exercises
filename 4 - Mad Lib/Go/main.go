package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func getInput(reader *bufio.Reader, mode string) string {
	fmt.Print("What is the ", mode, "? ")
	input, _ := reader.ReadString('\n')
	input = strings.TrimSuffix(input, "\n")
	return input
}

func main() {
	stdinReader := bufio.NewReader(os.Stdin)

	verb := getInput(stdinReader, "verb")
	adj := getInput(stdinReader, "adjective")
	noun := getInput(stdinReader, "noun")
	adv := getInput(stdinReader, "adverb")

	fmt.Println("Do you", verb, "your", adj, noun, adv, "? That's hilarious!")
}
