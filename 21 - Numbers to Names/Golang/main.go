package main

import "fmt"

func month(in int) string {
	switch in {
	case 1:
		return "January"
	case 2:
		return "Februrary"
	case 3:
		return "March"
	case 4:
		return "April"
	case 5:
		return "May"
	case 6:
		return "June"
	case 7:
		return "July"
	case 8:
		return "August"
	case 9:
		return "September"
	case 10:
		return "October"
	case 11:
		return "November"
	case 12:
		return "December"
	default:
		return "NO SUCH MONTH"
	}
}

func main() {
	var number int
	fmt.Print("Please enter the number of the month: ")
	fmt.Scanf("%d", &number)

	fmt.Println(month(number))

}
