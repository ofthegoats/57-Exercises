package main

import (
	"fmt"
	"math/rand"
	"time"
)

var (
	LETTERS = []rune("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
	DIGITS  = []rune("1234567890")
	SPECIAL = []rune("`¬!\"£$%^&*(){}[];:'@#~\\|/,.>< -_=+")
)

func getfInt(format string, a ...interface{}) int {
	var ret int
	fmt.Printf(format, a...)
	fmt.Scanf("%d", &ret)
	return ret
}

func runeIn(r rune, list []rune) bool {
	for _, v := range list {
		if v == r {
			return true
		}
	}
	return false
}

func amountIn(str string, list []rune) int {
	ret := 0
	for _, v := range str {
		if runeIn(v, list) {
			ret++
		}
	}
	return ret
}

func main() {
	min_length := getfInt("What is the minimum length? ")
	min_digits := getfInt("What is the minimum amount of digits? ")
	min_special := getfInt("What is the minimum amount of special characters? ")
	var password string

	// ALLCHAR contains all the characters from lists defined globally
	ALLCHAR := append(LETTERS, DIGITS...)
	ALLCHAR = append(ALLCHAR, SPECIAL...)
	rand.Seed(time.Now().UnixNano())
	for i := 0; i <= min_length; i++ {
		password += string(ALLCHAR[rand.Intn(len(ALLCHAR)-1)])
	}

	// EXTRACHAR contains the digits and special characters only
	EXTRACHAR := append(DIGITS, SPECIAL...)
	for amountIn(password, DIGITS) < min_digits || amountIn(password, SPECIAL) < min_special {
		password += string(EXTRACHAR[rand.Intn(len(EXTRACHAR)-1)])
	}

	fmt.Println("Your password is")
	fmt.Println(password)
}
