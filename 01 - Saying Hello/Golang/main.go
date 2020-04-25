package main

import (
	"fmt"
	"bufio"
	"os"
	"strings"
)

func main() {
	stdinReader := bufio.NewReader(os.Stdin)
	fmt.Print("What is your name? ")
	name, _ := stdinReader.ReadString('\n')

	name = strings.TrimSuffix(name, "\n")

	fmt.Println("Hello, ",name,", nice to meet you!")
}
