package main

func sumInts(nums []int) int {
	var sum int
	for _, v := range nums {
		sum += v
	}
	return sum
}

func sumFloats(nums []float64) float64 {
	var sum float64
	for _, v := range nums {
		sum += v
	}
	return sum
}

func maxInt(nums []int) int {
	max := nums[0]
	for _, v := range nums {
		if v > max {
			max = v
		}
	}
	return max
}

func minInt(nums []int) int {
	min := nums[0]
	for _, v := range nums {
		if v < min {
			min = v
		}
	}
	return min
}
