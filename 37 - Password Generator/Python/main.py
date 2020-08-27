from random import choice
from string import ascii_letters, digits, punctuation

LETTERS = list(ascii_letters)
DIGITS = list(digits)
SPECIAL = list(punctuation)


def amount_in(string, list):
    ret = int()
    for i in string:
        if i in list:
            ret += 1
    return ret


def main():
    # Init vars
    min_length = int(input("What is the minimum length? "))
    num_special = int(input("What amount of special characters? "))
    num_digits = int(input("What amount of digits? "))
    password = str()
    for i in range(min_length):
        password += choice(LETTERS + DIGITS + SPECIAL)
    while (
        amount_in(password, SPECIAL) < num_special
        or amount_in(password, DIGITS) < num_digits
    ):
        password += choice(DIGITS + SPECIAL)
    print("Your password is: ", password)


if __name__ == "__main__":
    main()
