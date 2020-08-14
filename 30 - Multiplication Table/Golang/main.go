package main

import (
    "fmt"
)

func main() {
    for i := 0; i <= 12; i++ {
        for j := 0; j <= 12; j++ {
            fmt.Printf("%d x %d = %d\n", i, j, i * j)
        }
    }
}
