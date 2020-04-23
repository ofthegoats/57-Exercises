package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("What is the quote? ")
	quote, _ := reader.ReadString('\n')
	quote = strings.TrimSuffix(quote, "\n")
	fmt.Print("Who said it? ")
	name, _ := reader.ReadString('\n')
	name = strings.TrimSuffix(name, "\n")

	fmt.Println(name, "says, \"", quote, ".\"")
}
