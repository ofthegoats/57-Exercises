def to_celcius(f):    return (f - 32) * 5/9
def to_fahrenheit(c): return (c * 9/5) + 32

def main():
    print("Input C to convert from Fahrenheit to Celsius")
    print("Input F to convert from Celsius to Fahrenheit")
    choice = input("Your choice: ").upper()
    if choice == "C":
        fah = float(input("Enter the temperature in Fahrenheit: "))
        print("The temperature in Celsius is {}".format(to_celcius(fah)))
    elif choice == "F":
        cel = float(input("Enter the temperature in Celsius: "))
        print("The temperature in Fahrenheit is {}".format(to_fahrenheit(cel)))

if __name__ == "__main__":
    main()
