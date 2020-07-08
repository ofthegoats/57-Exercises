#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

std::string strtolower(std::string string)
{
    for (unsigned int i = 0; i < string.length(); i++) {
        string[i] = tolower(string[i]);
    }
    return string;
}

int main()
{
    float amount, tax;
    std::cout << "What is the order amount? ";
    std::cin >> amount;

    std::cout << "What state do you live in? ";
    std::string state;
    std::cin >> state;
    state = strtolower(state);

    if (state == "winconsin") {
        std::cout << "What county do you live in? ";
        std::string county;
        std::cin >> county;
        county = strtolower(county);

        if (county == "eau claire") {
            tax = 0.005;
        } else if (county == "dunn") {
            tax = 0.004;
        }
    } else if (state == "illinois") {
        tax = 0.008;
    }

    std::cout << "The tax is $" << std::fixed << std::setprecision(2) << amount * tax << std::endl;
    std::cout << "The total is $" << std::fixed << std::setprecision(2) << amount + (amount * tax) << std::endl;

    return 0;
}
