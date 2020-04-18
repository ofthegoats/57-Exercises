package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	stdinReader := bufio.NewReader(os.Stdin)
	fmt.Print("What is the input string? ")
	string, _ := stdinReader.ReadString('\n')

	string = strings.TrimSuffix(string, "\n")

	fmt.Println(string, "has ", len(string), "characters.")
}
