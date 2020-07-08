package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)

	var amount, tax float64
	fmt.Print("What is the order amount? ")
	fmt.Scanf("%f", &amount)

	fmt.Print("What state do you live in? ")
	scanner.Scan()
	state := strings.ToLower(scanner.Text())

	if state == "wisconsin" {
		fmt.Print("What county do you live in? ")
		scanner.Scan()
		county := strings.ToLower(scanner.Text())
		if county == "eau claire" {
			tax = 0.005
		} else if county == "dunn" {
			tax = 0.004
		}
	} else if state == "illinois" {
		tax = 0.008
	}

	fmt.Printf("The tax is $%.2f.\nThe total is $%.2f.\n", amount*tax, amount+(amount*tax))
}
