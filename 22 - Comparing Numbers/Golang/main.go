package main

import (
	"fmt"
	"sort"
)

func highestinarr(arr []int) int {
	h := arr[0] // maxsize is hardcoded, so checking not needed here imo

	for _, v := range arr {
		if v > h {
			h = v
		}
	}
	return h
}

func hasduplicates(arr []int) bool {
	sort.Ints(arr)
	for i := 0; i < len(arr)-1; i++ {
		if arr[i] == arr[i+1] {
			return true
		}
	}
	return false
}

func main() {
	const maxsize = 3
	var numbers [maxsize]int
	for i := 0; i < maxsize; i++ {
		fmt.Print("Enter a number: ")
		fmt.Scanf("%d", &numbers[i])
	}

	if hasduplicates(numbers[:]) {
		fmt.Println("There are duplicates in this list.")
		return
	} else {
		fmt.Printf("The highest number is %d.", highestinarr(numbers[:]))
	}
}
