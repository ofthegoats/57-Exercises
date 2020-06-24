package main

import (
    "fmt"
    "strconv"
)

func input_float(output string) float64 {
    hold := "NaN"
    for {
        fmt.Printf(output)
        fmt.Scanf("%s", &hold)

        f, err := strconv.ParseFloat(hold, 64)
        if err != nil {
            continue
        } else {
            return f
        }
    }
}

func calculate_BAC(A float64, W float64, r float64, H float64) float64 {
    return (A * 5.14/W  * r) - 0.015 * H;
}

func main() {
    alcohol := input_float("How much alcohol have you consumed? ")
    weight  := input_float("What is your weight in pounds? ")
    hours   := input_float("How many hours ago was your last drink? ")

    var bac float64 = 0

    var sex string  = "NaS"
    MALE           := []string{"male", "man", "m"}
    FEMALE         := []string{"female", "woman", "f"}
    for ( !in_string_slice(sex, MALE) && !in_string_slice(sex, FEMALE) ) {
        fmt.Printf("Is your biological sex male or female? ")
        fmt.Scanf("%s", &sex)
    }

    if ( in_string_slice(sex, MALE) ) {
        bac = calculate_BAC(alcohol, weight, 0.73, hours)
        fmt.Printf("Your blood alcohol content is %f\n", bac)
    } else {
        bac = calculate_BAC(alcohol, weight, 0.66, hours)
        fmt.Printf("Your blood alcohol content is %f\n", bac)
    }

    if ( bac >= 0.08 ) { fmt.Printf("It is not legal for you to drive.\n") }
    if ( bac <= 0.08 ) { fmt.Printf("It is legal for you to drive.\n")     }

}

func in_string_slice(element string, list []string) bool {
    for _, val := range list {
        if ( val == element ) {
            return true
        } else {
            continue
        }
    }
    return false // element was not found in list
}
