package main

import (
    "fmt"
    "strconv"
)

func calc_bmi(weight float64, height float64) float64 {
    return (weight / (height * height)) * 703
}

func finput(output string) float64 {
    hold := "NaN"
    for {
        fmt.Print(output)
        fmt.Scanf("%s", &hold);
        number, err := strconv.ParseFloat(hold, 64)
        if err == nil {
            return number
        } else {
            continue
        }
    }
}

func main() {
    weight := finput("What is your weight in pounds? ")
    height := finput("What is your height in inches? ")
    bmi := calc_bmi(weight, height)
    fmt.Printf("Your BMI is %f", bmi)

    if  bmi < 18.5 {
        fmt.Printf("You are underweight. Go see a doctor.")
    } else if bmi > 25 {
        fmt.Printf("You are overweight. Go see a doctor.")
    } else {
        fmt.Printf("You are in the ideal weight range.")
    }
}
