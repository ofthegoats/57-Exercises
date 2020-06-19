def main():
    amount = float(input("What is the order amount? "))
    tax = 0
    if input("What is the state? ") == "WI":
        # state is only used here, so can remain anonymous
        tax = amount * 0.055
        print("The tax is ${}".format(tax))
    print("The total is ${}".format(amount + tax))

if __name__ == "__main__":
    main()
