#!/usr/bin/env python

from hashlib import sha256

def validate(username, password):

    KNOWN = {
            # username : sha256
            "piokozi"  : "5e884898da28047151d0e56f8dc6292773603d0d6aabbdd62a11ef721d1542d8", # "password"
            }

    hashed = sha256(password.encode()).hexdigest()

    if username not in KNOWN.keys(): # the user does not exist
        return False
    elif hashed != KNOWN[username]: # the password is wrong
        return False
    else: # login is successful
        return True

if __name__ == "__main__":
    username = input("username: ")
    password = input("password: ")
    successful = validate(username, password)
    if successful:
        print("Welcome!")
    if not successful:
        print("I don't know you.")
