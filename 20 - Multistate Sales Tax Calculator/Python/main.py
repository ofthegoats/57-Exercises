#!/usr/bin/env python

def main():
    amount = float(input("What is the order amount? "))
    tax    = 0
    state  = input("What state do you live in? ").lower()

    if state == "wisconsin":
        county = input("What county do you live in? ").lower()
        if county == "eau claire":
            tax = 0.005
        elif county == "dunn":
            tax = 0.004
    elif state == "illinois":
        tax = 0.08

    print("The tax is ${}.\nThe total is ${}.\n".format(amount * tax, amount +
                                                      (amount * tax)))

if __name__ == "__main__":
    main()
