#include <iostream>
#include <ostream>
#include <string>

int main(void)
{
    std::string line;
    std::cout << "What is the input? ";
    std::getline(std::cin, line);
    std::cout << line << " has " << line.size() << " characters" << std::endl;
    return 0;
}
