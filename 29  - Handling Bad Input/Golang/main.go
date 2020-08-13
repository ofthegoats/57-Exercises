package main

import (
	"fmt"
	"strconv"
)

func yearsToDouble(rate float64) float64 {
	return 72 / rate
}

func main() {
	var srate string
	for {
		fmt.Print("What is the expected rate of return? ")
		fmt.Scanf("%s", &srate)
		if rate, err := strconv.ParseFloat(srate, 64); err == nil && rate != 0 {
			years := yearsToDouble(rate)
			fmt.Printf("It will take %.2f years to double your initial investment.\n", years)
			break
		} else if rate == 0 && err == nil { // invalid inputs also return 0
			fmt.Println("Rate cannot be 0")
			continue
		} else {
			fmt.Println("Invalid input.")
			continue
		}
	}
}
