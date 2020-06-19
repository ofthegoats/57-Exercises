package main

import (
    "fmt"
)

func main() {
    var amount, tax float64
    fmt.Printf("What is the amount? $")
    fmt.Scanf("%f", &amount)

    var state string
    fmt.Printf("What is the state? ")
    fmt.Scanf("%s", &state)
    if (state == "WI") {
        tax = 0.055 * amount;
        fmt.Printf("The tax is $%.2f\n", tax)
    }

    fmt.Printf("The total is $%.2f\n", amount + tax)
}
