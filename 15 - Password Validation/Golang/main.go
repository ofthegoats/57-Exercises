package main

import (
	"bufio"
	"fmt"
	"os"
)

func validate(user string, pass string) bool {

    // would be nice to store sha256 of password, but for now that is beyond my Go
    KNOWN := map[string]string {
        "piokozi" : "password",
    }

    if _, exists := KNOWN[user]; !exists { // user does not exist
        return false
    } else if KNOWN[user] != pass { // wrong password
        return false
    } else { // correct details
        return true
    }
}

func main() {
    scanner := bufio.NewScanner(os.Stdin)

    var username, password string
    var successful bool

    fmt.Print("username: ")
    scanner.Scan()
    username = scanner.Text()

    fmt.Print("password: ")
    scanner.Scan()
    password = scanner.Text()

    successful = validate(username, password)

    if successful {
        fmt.Println("Welcome!")
    } else {
        fmt.Println("I don't know you.")
    }
}
