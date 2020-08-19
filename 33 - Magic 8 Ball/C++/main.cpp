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

int main()
{
    std::string RESPONSES[] = {
        "Yes",
        "No",
        "Maybe",
        "Ask again later",
    };
    std::cout << "What is your question? ";
    std::string _;
    std::cin >> _;
    std::cout << RESPONSES[random_int(0, RESPONSES->size())] << std::endl;
    return 0;
}
