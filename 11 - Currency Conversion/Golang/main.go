package main

import (
	"fmt"
)

func main() {
	var nEUR, rate float64
	fmt.Printf("How many euros are you exchanging? €")
	fmt.Scanf("%f", &nEUR)

	fmt.Printf("What is the exchange rate? ")
	fmt.Scanf("%f", &rate)

	fmt.Printf("€%.2f at an exchange rate of %f is £%.2f\n", nEUR, rate, nEUR*rate)
}
