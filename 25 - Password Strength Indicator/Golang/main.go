// Package main provides ...
package main

import (
	"fmt"
	"strings"
)

func boolcount(list []bool, value bool) int {
	count := 0
	for _, v := range list {
		if v == value {
			count += 1
		}
	}
	return count
}

func hascharactersfrom(str string, chars string) bool {
	for _, letter := range str {
		if strings.ContainsRune(chars, letter) {
			return true
		}
	}
	return false
}

func passwordValidator(password string) int {
	/*
	   returns a number 0-3 representing the strength of the password
	   0 - very weak
	   1 - weak
	   2 - strong
	   3 - very strong
	*/
	LETTERS := "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
	NUMBERS := "0123456789"
	SPECIAL := "`¬|\\!\"£$%^&*()-_=+[]{};:'@#~,.<>/?"
	has_letters := hascharactersfrom(password, LETTERS)
	has_numbers := hascharactersfrom(password, NUMBERS)
	has_special := hascharactersfrom(password, SPECIAL)

	if len(password) < 8 { // must be one of the "weak" passwords
		if boolcount([]bool{has_letters, has_numbers, has_special}, true) == 1 {
			return 0 // very weak password
		} else {
			return 1 // weak password
		}
	} else { // must be one the the "strong" passwords
		if has_letters && has_numbers && has_special {
			return 3 // very strong password
		} else {
			return 2 // strong password
		}
	}
}

func main() {
	var password string
	fmt.Print("Enter the password to be checked: ")
	fmt.Scanf("%s", &password)
	password_strength := passwordValidator(password)

	switch password_strength {
	case 0:
		fmt.Printf("\"%s\" is a very weak password.\n", password)
	case 1:
		fmt.Printf("\"%s\" is a weak password.\n", password)
	case 2:
		fmt.Printf("\"%s\" is a strong password.\n", password)
	case 3:
		fmt.Printf("\"%s\" is a very strong password.\n", password)
	}
}
