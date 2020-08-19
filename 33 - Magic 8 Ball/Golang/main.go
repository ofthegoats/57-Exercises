// Magic 8 ball

package main

import (
	"bufio"
	"fmt"
	"math/rand"
	"os"
	"time"
)

var RESPONSES = []string{
	"No",
	"Yes",
	"Maybe",
	"Ask again later",
}

func randomInt(low, high int) int {
    rand.Seed(time.Now().UnixNano())
	return rand.Intn(high-low) + low
}

func main() {
	fmt.Print("What is your question? ")
	reader := bufio.NewReader(os.Stdin)
    reader.ReadString('\n') // no variables taken :p
	randomNumber := randomInt(0, len(RESPONSES))
	fmt.Println(RESPONSES[randomNumber])
}
