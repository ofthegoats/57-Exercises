package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func ConvertToInts(strnums []string) ([]int, error) {
	nums := make([]int, 0)
	for _, val := range strnums {
		num, err := strconv.Atoi(val)
		if err != nil {
			return nil, err
		}
		nums = append(nums, num)
	}
	return nums, nil
}

func FilterEvenInts(allnums []int) []int {
	evennums := make([]int, 0)
	for _, val := range allnums {
		if val%2 == 0 {
			evennums = append(evennums, val)
		}
	}
	return evennums
}

func main() {
	fmt.Print("Enter your numbers: ")
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	strnums := strings.Fields(scanner.Text())
	allnums, err := ConvertToInts(strnums)
	if err != nil {
		panic(err)
	}
	evennums := FilterEvenInts(allnums)
	fmt.Printf("The even numbers are: %+v\n", evennums)
}
