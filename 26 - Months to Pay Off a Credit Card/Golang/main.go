// Package main provides ...
package main

import (
	"fmt"
	"math"
)

func months_to_pay_off(i, b, p float64) float64 {
	nominator := math.Log10(1+b/p*(1-math.Pow(1+i, 30))) * (-1.0 / 30)
	return nominator / math.Log10(1+i)
}

func main() {
	var balance, apr, montly float64
	fmt.Print("What is your balance? ")
	fmt.Scanf("%f", &balance)
	fmt.Print("What is the APR on the card (as a percent)? ")
	fmt.Scanf("%f", &apr)
	fmt.Print("What is the montly payment you can make? ")
	fmt.Scanf("%f", &montly)

	months := math.Ceil(months_to_pay_off(apr/100/365, balance, montly))

	fmt.Printf("It will take you %0.f months to pay off this card.", months)
}
