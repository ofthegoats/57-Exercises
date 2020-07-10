#!/usr/bin/env python

def highestinset(s):
    h = next(iter(s))
    for i in s:
        if i > h: h = i
    return h


def main(maxsize):
    arrnumbers = [int(input("Enter a number: ")) for i in range(maxsize)]

    setnumbers = set(arrnumbers)

    if len(setnumbers) < len(arrnumbers):
        print("There are duplicate numbers")
        return
    else:
        print("The highest number is: {}".format(highestinset(setnumbers)))


if __name__ == "__main__":
    main(3)
