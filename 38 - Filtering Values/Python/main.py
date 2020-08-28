def filter_even_numbers(allnums):
    evennums = []
    for i in allnums:
        if i % 2 == 0:
            evennums.append(i)
    return evennums


def main():
    numbers = [int(i) for i in input("Enter the numbers: ").split(" ")]
    print(f"Even numbers are {filter_even_numbers(numbers)}")


if __name__ == "__main__":
    main()
