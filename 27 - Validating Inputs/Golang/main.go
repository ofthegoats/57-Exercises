package main

import (
	"fmt"
	"regexp"
)

func getString(output string) string {
	fmt.Print(output)
	var temp string
	fmt.Scanf("%s", &temp)
	return temp
}

func isValidName(name string) bool {
	if name == "" {
		fmt.Println("Name must be filled in.")
		return false
	}
	if matches, _ := regexp.MatchString(`\d+`, name); matches {
		fmt.Println("Not a valid name: contains digits.")
		return false
	}
	if len(name) <= 2 {
		fmt.Println("Not a valid name: too short.")
		return false
	}
	return true
}

func isValidZip(zip string) bool {
	if zip == "" {
		fmt.Println("ZIP code must be filled in.")
		return false
	}
	if matches, _ := regexp.MatchString(`^\d+$`, zip); matches {
		return true
	} else {
		fmt.Println("ZIP code must be numeric")
		return false
	}
}

func isValidId(id string) bool {
	if id == "" {
		fmt.Println("Employee ID must be filled in.")
		return false
	}
	if matches, _ := regexp.MatchString(`^[a-zA-Z]{2}-\d{4}$`, id); matches {
		return true
	} else {
		fmt.Println("Employee ID must follow format AA-1234.")
		return false
	}
}

func validateInput(firstname, lastname, zipcode, employeeid string) bool {
	validfn := isValidName(firstname)
	validln := isValidName(lastname)
	validzc := isValidZip(zipcode)
	validei := isValidId(employeeid)
	return validfn && validln && validzc && validei
}

func main() {
	firstname := getString("Enter the first name: ")
	lastname := getString("Enter the last name: ")
	zipcode := getString("Enter the ZIP code: ")
	employeeid := getString("Enter the employee ID: ")
	valid := validateInput(firstname, lastname, zipcode, employeeid)
	if valid {
		fmt.Println("No errors found.")
	} else {
		fmt.Println("Errors were found.")
	}
}
