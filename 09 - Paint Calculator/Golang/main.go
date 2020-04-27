package main

import (
	"fmt"
	"math"
)

func main() {
	var l, w float64

	fmt.Printf("What is the width of the ceiling in feet? ")
	fmt.Scanf("%f", &w)
	fmt.Printf("What is the length of the ceiling in feet? ")
	fmt.Scanf("%f", &l)

	fmt.Printf("You will need to purchase %.0f gallons of paint to cover %.3f square feet.\n", math.Ceil(l*w/350), l*w)
}
