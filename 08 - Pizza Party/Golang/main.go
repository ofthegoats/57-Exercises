package main

import "fmt"

func main() {
	var noPeople int
	fmt.Printf("How many people? ")
	fmt.Scanf("%d", &noPeople)

	var noPizza int
	fmt.Printf("How many pizzas? ")
	fmt.Scanf("%d", &noPizza)

	var noSlices int
	fmt.Printf("How many slices per pizza? ")
	fmt.Scanf("%d", &noSlices)

	fmt.Printf("%d people with %d pizzas, each of %d slices\n", noPeople, noPizza, noSlices)
	fmt.Printf("Each person gets %d slices.\n", noSlices*noPizza/noPeople)
	fmt.Printf("There are %d leftover slices.\n", noSlices*noPizza%noPeople)

}
