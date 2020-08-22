from random import choice


def generate_list(output):
    l = list()
    while True:
        i = input(output)
        if i != "":
            l.append(i)
        else:
            return l


def main():
    names = generate_list("Enter a name: ")
    print(f"The winner is... {choice(names)}")


if __name__ == "__main__":
    main()
