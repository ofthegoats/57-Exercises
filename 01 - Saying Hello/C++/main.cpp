#include <iostream>
#include <string>

int main(void)
{
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    return 0;
}
