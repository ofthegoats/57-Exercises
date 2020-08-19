# Magic 8 Ball

from random import choice

RESPONSES = [
    "Yes",
    "No",
    "Maybe",
    "Ask again later",
]


def main():
    input("What's your question? ")
    print(choice(RESPONSES))


if __name__ == "__main__":
    main()
