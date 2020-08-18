#include <cmath>
#include <iostream>
#include <random>

// returns a random integer in the range passed
int random_int(int low, int high)
{
    std::random_device                 rand_dev;
    std::mt19937                       generator(rand_dev());
    std::uniform_int_distribution<int> distr(low, high);
    return distr(generator);
}

int get_int(std::string output)
{
    int temp;
    std::cout << output;
    std::cin >> temp;
    return temp;
}

void game()
{
    int n_guesses = 0;  // first guess is outside the loop
    int difficulty = get_int("What difficulty? (1,2,3): ");
    int number    = random_int(0, std::pow(10, difficulty));
    while (true) {
        n_guesses++;
        int guess = get_int("What is your guess? ");
        if (guess < number) {
            std::cout << "Too low." << std::endl;
            continue;
        } else if (guess > number) {
            std::cout << "Too high." << std::endl;
            continue;
        } else {
            break;
        }
    }
    std::cout << "It took you " << n_guesses << " guesses to get the number." << std::endl;
}

int main() {
    game();
    while (true) {
        std::string play_again;
        std::cout << "Play again? y/n ";
        std::cin >> play_again;
        if (play_again == "y") {
            game();
            continue;
        } else if (play_again == "n") {
            std::cout << "Bye!" << std::endl;
            break;
        } else {
            std::cout << "Not a valid input." << std::endl;
            continue;
        }
    }
    return 0;
}
