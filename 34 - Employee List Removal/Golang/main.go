package main

import (
	"bufio"
	"fmt"
	"os"
)

func printSList(list []string) {
	for _, v := range list {
		fmt.Println(v)
	}
}

func removeFromSList(list []string, s string) []string {
	var newList []string
	for _, val := range list {
		if val != s {
			newList = append(newList, val)
		}
	}
	return newList
}

func stdinput(output string) string {
	scanner := bufio.NewScanner(os.Stdin)
    fmt.Print(output)
    scanner.Scan()
    return scanner.Text()
}

func main() {
	employees := []string{
		"alice",
		"bob",
		"charlie",
		"dave",
		"eve",
	}
	fmt.Printf("There are %d employees\n", len(employees))
	printSList(employees)
    nameToRemove := stdinput("What is the name of the employee to remove? ")
    employees = removeFromSList(employees, nameToRemove)
	fmt.Printf("There are %d employees\n", len(employees))
    printSList(employees)
}
