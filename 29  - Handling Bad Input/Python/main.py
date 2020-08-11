def isValidNumber(inp):
    try:
        num = float(inp)
        if num == 0: return False
        else: return True
    except ValueError:
        return False

def yearsToDouble(r): return 72 / float(r)

def main():
    while True:
        rate = input("What is the expected rate of return? ")
        if isValidNumber(rate):
            print(f"It will take {yearsToDouble(rate)} years to double your initial investment.")
            break
        else:
            print("Not a valid input.")
            continue


if __name__ == "__main__":
    main()
