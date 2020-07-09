def main():
    MONTHS = {
        1:  "January",
        2:  "February",
        3:  "March",
        4:  "April",
        5:  "May",
        6:  "June",
        7:  "July",
        8:  "August",
        9:  "September",
        10: "October",
        11: "November",
        12: "December",
    }

    number = int(input("Please enter the number of the month: "))

    try:
        print("The name of the month is {}".format(MONTHS[number]))
    except KeyError:
        print("This month does not exist")


if __name__ == "__main__":
    main()
