package main

import (
    "bufio"
    "fmt"
    "os"
    "crypto/sha256"
    "encoding/hex"
)

func hash(s string) string {
    b := []byte(s)
    shad := sha256.Sum256(b)
    return hex.EncodeToString(shad[:32])
}

func validate(user string, pass string) bool {

    KNOWN := map[string]string {
        "piokozi" : "5e884898da28047151d0e56f8dc6292773603d0d6aabbdd62a11ef721d1542d8" ,
    }

    hashed := hash(pass)

    if _, exists := KNOWN[user]; !exists { // user does not exist
        return false
    } else if KNOWN[user] != hashed { // wrong password
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
