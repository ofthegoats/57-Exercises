package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
	"strconv"
)

func generateListInts(output string) []int {
	list := make([]int, 0)
	scanner := bufio.NewScanner(os.Stdin)
	for {
		fmt.Print(output)
		scanner.Scan()
		inp := scanner.Text()
		if inp == "" {
			return list
		}
		num, err := strconv.Atoi(inp)
		if err != nil {
			fmt.Println(err)
		} else {
			list = append(list, num)
		}
	}
}

func standardDeviation(nums []int) float64 {
	mean := mean(nums)
	newnums := make([]float64, 0, 0)
	for _, val := range nums {
		fval := float64(val)
		newnums = append(newnums, ((fval - mean) * (fval - mean)))
	}
	return math.Sqrt(sumFloats(newnums) / float64(len(newnums)-1))
}

func mean(nums []int) float64 {
	return float64(sumInts(nums)) / float64(len(nums))
}

func main() {
	numbers := generateListInts("Enter a number: ")
	fmt.Println("Numbers: ", numbers)
	fmt.Printf("Average: %f\n", mean(numbers))
	fmt.Printf("Minimum: %d\n", minInt(numbers))
	fmt.Printf("Maximum: %d\n", maxInt(numbers))
	fmt.Printf("Standard deviation: %f\n", standardDeviation(numbers))
}
