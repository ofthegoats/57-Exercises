#include <cmath>
#include <cstdlib>
#include <iostream>

float years_to_double(float rate)
{
    return 72 / rate;
}

int main()
{
    std::string srate;
    while (true) {
        std::cout << "What is the expected rate of return? ";
        std::cin >> srate;

        char *end = nullptr;
        float val = strtof(srate.c_str(), &end);
        if (end != srate.c_str() && *end == '\0' && val != HUGE_VALF
            && val != 0) {
            std::cout << "It will take " << years_to_double(val)
                      << " years to double your investment" << std::endl;
            break;
        } else {
            std::cout << "Not a valid input" << std::endl;
            continue;
        }
    }
    return 0;
}
