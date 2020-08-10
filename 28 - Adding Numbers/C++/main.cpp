#include <iostream>

int main()
{
    int   loops  = 0;
    float number = 0, numbuf = 0;
    std::cout << "How many loops? ";
    std::cin >> loops;
    for (int i = 0; i < loops; i++) {
        std::cout << "Enter a number:";
        std::cin >> numbuf;
        number += numbuf;
        numbuf = 0.0;
    }
    std::cout << "The total is " << number << std::endl;
    return 0;
}
