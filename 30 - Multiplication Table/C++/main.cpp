#include <iostream>

int main()
{
    for (int i = 0; i <= 12; i++)
        for (int j = 0; j <= 12; j++)
            std::cout << i << " x " << j << " = " << i * j << std::endl;
    return 0;
}
