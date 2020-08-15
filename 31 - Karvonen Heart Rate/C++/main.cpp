#include <boost/format.hpp>
#include <boost/format/format_fwd.hpp>
#include <iostream>

float get_float(std::string output) {
    std::cout << output;
    float temp;
    std::cin >> temp;
    return temp;
}

float bpm(float i, float r, float a) {
    return (((220 - a) - r) * i) + r;
}

int main()
{
    float age = get_float("Age: ");
    float resting = get_float("Resting pulse: ");

    std::cout << "Intensity | Rate" << std::endl;
    std::cout << "----------|-----" << std::endl;

    for (float i = 55; i <= 95; i += 5) {
        std::cout << boost::format("%d%%       | %.2f bpm") % (int) i % bpm(i/100, resting, age) << std::endl;
    }

    return 0;
}
