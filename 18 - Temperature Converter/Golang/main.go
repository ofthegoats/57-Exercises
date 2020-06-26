package main

import (
    "fmt"
    "unicode"
    "bufio"
    "os"
)

func to_celsius(f float64) float64    { return (f - 32) * 5/9 }
func to_fahrenheit(c float64) float64 { return (c * 9/5) + 32 }

func main() {
    fmt.Println("Press C to convert from Fahrenheit to Celsius.")
    fmt.Println("Press F to convert from Celsius to Fahrenheit.")
    fmt.Print("Your choice: ")

    reader := bufio.NewReader(os.Stdin)
    choice, _, _ := reader.ReadRune() // error handling? lol

    var temp float64
    switch unicode.ToLower(choice) {
    case 'c':
        fmt.Print("Please enter the temperature in Fahrenheit: ")
        fmt.Scanf("%f", &temp)
        fmt.Printf("The temperature in Celsius is %f\n", to_celsius(temp))
    case 'f':
        fmt.Print("Please enter the temperature in Celsius: ")
        fmt.Scanf("%f", &temp)
        fmt.Printf("The temperature in Fahrenheit is %f\n", to_fahrenheit(temp))
    default:
        fmt.Println("Not a valid selection")
    }
}
