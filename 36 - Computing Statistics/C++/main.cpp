#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>

bool is_integral_string(std::string inp)
{
    for (char i : inp) {
        if (!std::isdigit(i)) {
            return false;
        }
    }  // only reaches here if none were not digits
    return true;
}

std::vector<int> generate_int_vector(std::string output)
{
    std::vector<int> v;
    std::string      inp;
    while (true) {
        std::cout << output;
        std::getline(std::cin, inp);
        if (inp.empty()) {
            return v;
        }
        if (is_integral_string(inp)) {
            v.push_back(std::stoi(inp));
        } else {
            std::cout << "NaN" << std::endl;
        }
    }
}

float ivector_mean(std::vector<int> v)
{
    int sum = 0;
    for (int i : v) {
        sum += i;
    }
    return (float)sum / v.size();
}

int ivector_max(std::vector<int> v)
{
    int ret = v[0];
    for (int i : v) {
        if (i > ret) {
            ret = i;
        }
    }
    return ret;
}

int ivector_min(std::vector<int> v)
{
    int ret = v[0];
    for (int i : v) {
        if (i < ret) {
            ret = i;
        }
    }
    return ret;
}

float ivector_standard_deviation(std::vector<int> v)
{
    float              mean = ivector_mean(v);
    std::vector<float> newnums;
    for (int i : v) {
        newnums.push_back(std::pow(i - mean, 2));
    }
    float sum = 0;
    for (float i : newnums) {
        sum += i;
    }
    return std::sqrt(sum / (newnums.size() - 1));
}

int main()
{
    auto times = generate_int_vector("Enter a number: ");
    std::cout << "Average: " << ivector_mean(times) << std::endl;
    std::cout << "Maximum: " << ivector_max(times) << std::endl;
    std::cout << "Minimum: " << ivector_min(times) << std::endl;
    std::cout << "Standard deviation: " << ivector_standard_deviation(times)
              << std::endl;
    return 0;
}
