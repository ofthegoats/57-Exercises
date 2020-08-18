from random import randint


def game():
    difficulty = int(input("What difficulty to play on (1,2,3)? "))
    number = randint(1, 10 ** difficulty)  # allows for numbers greater than 3
    n_guesses = int()
    while True:
        n_guesses += 1
        guess = int(input("What is your guess? "))
        if guess > number:
            print("Too high.")
        elif guess < number:
            print("Too low")
        else:
            break

    print(f"Correct, the number is {number}")
    print(f"It took you {n_guesses} attempts to get the number")

def main():
    game()
    while True:
        play_again = input("Want to play again? y/n: ").lower()
        if play_again == "y":
            game()
        elif play_again == "n":
            print("Bye!")
            break
        else:
            print("Not a valid input")

if __name__ == "__main__":
    main()
