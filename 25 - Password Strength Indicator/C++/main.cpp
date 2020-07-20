#include <iostream>
#include <string>

bool hascharacters(const std::string string, const std::string &characters) {
    for (char letter : string)
        if (characters.find(letter) == std::string::npos)
            return false;
    return true;
}

int passwordValidator(const std::string pass) {
    /*
     * Returns strength of password as a number 0-3
     * 0 - very weak password
     * 1 - weak password
     * 2 - strong password
     * 3 - very strong password
     */
    const std::string letters =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    const std::string numbers = "1234567890";
    const std::string special = "!\"£$%^&*()-_=+`¬\\|[]{}:;'@#~,<.>/?";
    bool has_letters          = hascharacters(pass, letters);
    bool has_numbers          = hascharacters(pass, numbers);
    bool has_special          = hascharacters(pass, special);

    if (pass.size() < 8) {  // must be one of the weak passwords
        if (has_letters + has_numbers + has_special
            == 1)      // slightly hacky XOR for 3 bool values
            return 0;  // very weak password
        else
            return 1;  // weak password
    } else {
        if (has_letters && has_numbers && has_special)
            return 3;  // very strong password
        else
            return 2;  // strong password
    }
}

int main() {
    std::string password;
    std::cout << "What is the password to check? ";
    std::cin >> password;
    int password_strength = passwordValidator(password);

    switch (password_strength) {
    case 0:
        std::cout << "\"" << password << "\" is a very weak password."
                  << std::endl;
        break;
    case 1:
        std::cout << "\"" << password << "\" is a weak password." << std::endl;
        break;
    case 2:
        std::cout << "\"" << password << "\" is a strong password."
                  << std::endl;
        break;
    case 3:
        std::cout << "\"" << password << "\" is a very strong password."
                  << std::endl;
        break;
    }
    return 0;
}
