package main

import (
    "fmt"
)

func getInt(output string) int {
    var temp int
    fmt.Print(output)
    fmt.Scanf("%d", &temp)
    return temp
}

func bpm(i float64, resting, age int) float64 {
    r := float64(resting)
    a := float64(age)
    return (((220 - a) - r) * i) + r
}

func main() {
    resting := getInt("Resting pulse: ")
    age := getInt("Age : ")

    fmt.Println("Intensity | Rate")
    fmt.Println("----------|-----")
    for i := 55.0; i <= 95; i += 5 {
        fmt.Printf("%d%%       | %f bpm\n", int(i), bpm(i/100, resting, age))
    }
}
