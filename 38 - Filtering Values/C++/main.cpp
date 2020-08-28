#include <iostream>
#include <vector>

std::vector<std::string> split_string_fields(std::string input)
{
    std::vector<std::string> ret;
    std::string              word;
    for (char i : input) {
        if (i == ' ') {  // if word is finished, append ro ret, and reset word
            ret.push_back(word);
            word = "";
        } else {
            word += i;  // append letter to form word
        }
    }
    ret.push_back(word); // append the last word (last character is not a space :p)
    return ret;
}

std::vector<int> conv_strvec_intvec(std::vector<std::string> strnums)
{
    std::vector<int> ret;
    for (std::string i : strnums) {
        ret.push_back(std::stoi(i));
    }
    return ret;
}

std::vector<int> filter_only_even(std::vector<int> nums)
{
    std::vector<int> ret;
    for (int i : nums) {
        if (i % 2 == 0) {
            ret.push_back(i);
        }
    }
    return ret;
}

int main()
{
    std::string strnums;
    std::cout << "What are you numbers? ";
    std::getline(std::cin, strnums);
    auto strvector_nums = split_string_fields(strnums);
    auto nums           = conv_strvec_intvec(strvector_nums);
    auto even_nums      = filter_only_even(nums);
    std::cout << "The even numbers are: ";
    for (int num : even_nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
