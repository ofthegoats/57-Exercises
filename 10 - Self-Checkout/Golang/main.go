package main

import "fmt"

func main() {
	var ni int
	fmt.Printf("What is the number of items? ")
	ni, _ = fmt.Scanf("%d", &ni)
	var subtotal, price, number float64
	for i := 0; i <= ni; i++ {
		fmt.Printf("What is the price of item %d: ", i+1)
		fmt.Scanf("%f", &price)
		fmt.Printf("What is the quantity of item %d: ", i+1)
		fmt.Scanf("%f", &number)
		subtotal += number * price
	}
	fmt.Printf("Subtotal: £%.2f\nTax: £%.2f\nTotal: £%.2f\n", subtotal, subtotal*0.055, subtotal*0.055+subtotal)
}
