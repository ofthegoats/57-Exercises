package main

import (
	"bufio"
	"fmt"
	"math/rand"
	"os"
	"time"
)

func generateList(output string) []string {
	scanner := bufio.NewScanner(os.Stdin)
	var list []string
	for {
		fmt.Print(output)
		scanner.Scan()
		input := scanner.Text()
		if input != "" {
			list = append(list, input)
		} else {
			return list
		}
	}
}

func main() {
	names := generateList("Enter a name: ")
	rand.Seed(time.Now().UnixNano())
	randomName := names[rand.Intn(len(names))]
	fmt.Printf("The winner is... %s\n", randomName)
}
