package main

import "fmt"

func main() {
	var l float32
	var w float32

	fmt.Printf("What is the length of the room in feet? ")
	fmt.Scanf("%f", &l)
	fmt.Printf("What is the width of the room in feet? ")
	fmt.Scanf("%f", &w)

	fmt.Printf("The area is\n%.3f square feet\n%.3f square metres", l*w, l*w*0.09290304)
}
