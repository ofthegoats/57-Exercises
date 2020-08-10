def main():
    loops = int(input("How many times to loop? "))
    number = float()
    for _ in range(loops):
        number += float(input("Enter a number: "))
    print(f"The total is {number}")


if __name__ == "__main__":
    main()
