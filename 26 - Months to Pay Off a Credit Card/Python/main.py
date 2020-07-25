from math import log10 as log
from math import ceil


def months_to_pay_off(i, b, p):
    return -1 / 30 * ((log(1 + b / p * (1 - (1 + i) ** 30))) / (log(1 + i)))


def main():
    balance = float(input("What is your balance? "))
    apr = float(input("What is the APR on the card (as a percent)? "))
    monthly = float(input("What is the monthly payment you can make? "))

    months = ceil(months_to_pay_off(apr / 100 / 365, balance, monthly))

    print("It will take you {} months to pay off this card.".format(months))


if __name__ == "__main__":
    main()
