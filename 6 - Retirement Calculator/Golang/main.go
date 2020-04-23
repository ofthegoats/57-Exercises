package main

import (
	"fmt"
	"time"
)

func main() {
	year := time.Now().Year()
	var agenow int
	fmt.Print("What is your current age? ")
	fmt.Scanf("%d", &agenow)
	var retireage int
	fmt.Print("At what age would you like to retire? ")
	fmt.Scanf("%d", &retireage)

	fmt.Printf("You have %d years left until you can retire.\n", retireage-agenow)

	fmt.Printf("It's %d, so you can retire in %d\n", year, year+(retireage-agenow))
}
