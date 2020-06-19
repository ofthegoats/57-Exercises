package main

import "fmt"

func main() {
	var P, r, Y float64 //may as well to make them compatible easily

	fmt.Printf("Enter the principal: £")
	fmt.Scanf("%f", &P)

	fmt.Printf("Enter the rate of interest: ")
	fmt.Scanf("%f", &r)

	fmt.Printf("Enter the number of years: ")
	fmt.Scanf("%f", &Y)

	fmt.Printf("After %.0f years at %.2f%%, the investment will be worth £%.2f\n", Y, r, P*(1+(r/100*Y)))
}
