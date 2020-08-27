#include <iostream>
#include <random>

std::string LETTERS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
std::string DIGITS  = "1234567890";
std::string SPECIAL = "`¬!\"£$%^&*(){}[]-_=+;:'@#~,<.>/?\\| ";

int get_int(std::string output)
{
    int ret;
    std::cout << output;
    std::cin >> ret;
    return ret;
}

bool char_in(char c, std::string s)
{
    for (char i : s) {
        if (i == c) {
            return true;
        }
    }
    return false;
}

int amount_in(std::string string, std::string list)
{
    int ret = 0;
    for (char c : string) {
        if (char_in(c, list)) {
            ret++;
        }
    }
    return ret;
}

int main()
{
    std::string                     ALLCHARS   = LETTERS + DIGITS + SPECIAL;
    std::string                     EXTRACHARS = DIGITS + SPECIAL;
    std::random_device              rand_dev;
    std::mt19937                    generator(rand_dev());
    std::uniform_int_distribution<> distr_all(0, ALLCHARS.size() - 1);
    std::uniform_int_distribution<> distr_extra(0, EXTRACHARS.size() - 1);

    int min_length = get_int("What is the minimum length? ");
    int min_digits = get_int("What is the minimum amount of digits? ");
    int min_special =
        get_int("What is the minimum amount of special characters? ");

    std::string password;
    for (int i = 0; i <= min_length; ++i) {
        password += ALLCHARS[distr_all(generator)];
    }

    while (amount_in(password, DIGITS) < min_digits
           || amount_in(password, SPECIAL) < min_special) {
        password += EXTRACHARS[distr_extra(generator)];
    }

    std::cout << "Your password is:\n" << password << std::endl;

    return 0;
}
