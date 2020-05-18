package main

import (
	"fmt"
	"math"
)

func getNum(s string) float64 {
	var t float64
	fmt.Printf("What is the %s? ", s)
	fmt.Scanf("%f", &t)
	return t
}

func main() {
	P := getNum("principal amount")
	r := getNum("annual rate of interest")
	t := getNum("number of years the amount is invested")
	n := getNum("number of times the investment is compounded per year")

	fmt.Printf("£%.2f invested at %.2f%% for %.0f years compounded %.1f times per year is £%.2f\n",
		P, r, t, n, P*math.Pow((1+(r/100/n)), n*t))
}
