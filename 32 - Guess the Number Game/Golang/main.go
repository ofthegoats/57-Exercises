package main

import (
	"fmt"
	"math"
	"math/rand"
	"time"
)

func getInt(output string) int {
	fmt.Print(output)
	var temp int
	fmt.Scanf("%d", &temp)
	return temp
}

func main() {
	difficulty := getInt("What difficulty do you want to play on (1,2,3)? ")
	rand.Seed(time.Now().UnixNano())
	number := rand.Intn(int(math.Pow(10, float64(difficulty)))-1) + 1 // range 1 - 10*difficulty
	nGuesses := 0
	for {
		nGuesses += 1
		guess := getInt("What is your guess? ")
		if guess > number {
			fmt.Println("Too high.")
		} else if guess < number {
			fmt.Println("Too low.")
		} else {
			break
		}
	}

	fmt.Printf("It took you %d guesses to guess the number\n", nGuesses)
}
