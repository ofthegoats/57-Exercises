package main

import (
	"fmt"
	"strconv"
)

func getInt(output string) int {
	var temp int
	fmt.Print(output)
	fmt.Scanf("%d", &temp)
	return temp
}

func getFloat(output string) float64 {
	var temp string // will parsefloat
	fmt.Print(output)
	fmt.Scanf("%s", &temp)
	float, err := strconv.ParseFloat(temp, 64)
	if err != nil {
		return 0
	} else {
		return float
	}
}

func main() {
	loops := getInt("How many loops? ")
	var number float64
	for i := 0; i < loops; i++ {
        number += getFloat("Enter a number: ")
	}
    fmt.Printf("The total is %f\n", number)
}
