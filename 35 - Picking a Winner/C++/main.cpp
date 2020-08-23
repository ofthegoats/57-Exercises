#include <iostream>
#include <random>
#include <string>
#include <vector>

std::vector<std::string> generate_list(std::string output)
{
    std::vector<std::string> l;
    while (true) {
        std::string input;
        std::cout << output;
        std::getline(std::cin, input);
        if (input != "") {
            l.push_back(input);
        } else {
            return l;
        }
    }
}

int random_int(int low, int high)
{
    std::random_device              rd;  // random number from hardware
    std::mt19937                    generate(rd());         // seed generator
    std::uniform_int_distribution<> distrubute(low, high);  // define the range
    return distrubute(generate);
}

int main()
{
    std::vector<std::string> names        = generate_list("Enter a name: ");
    int                      random_index = random_int(0, names.size() - 1);
    std::cout << "The winner is... " << names[random_index] << std::endl;
    return 0;
}
