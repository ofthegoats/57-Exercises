package main

import "fmt"

func main() {
	var n1 float64
	fmt.Print("What is the first number? ")
	_, _ = fmt.Scanf("%64f", &n1)
	var n2 float64
	fmt.Print("What is the second number? ")
	_, _ = fmt.Scanf("%f", &n2)

	fmt.Printf("%v + %v = %v\n", n1, n2, n1+n2)
	fmt.Printf("%v - %v = %v\n", n1, n2, n1-n2)
	fmt.Printf("%v * %v = %v\n", n1, n2, n1*n2)
	fmt.Printf("%v / %v = %v\n", n1, n2, n1/n2)
}
