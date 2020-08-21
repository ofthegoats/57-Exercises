#include <iostream>
#include <string>
#include <vector>

// iterates over and prints vector<string>
void print_vector(std::vector<std::string> &v)
{
    for (std::string &element : v) {
        std::cout << element << std::endl;
    }
}

// removes string from specified vector
void rm_from_vector(
    std::vector<std::string> &v, std::string s)
{
    for (auto it = v.begin(); it != v.end();) {
        if (*it == s)
            it = v.erase(it);
        else
            it++;
    }
}

int main() {
    std::vector<std::string> employees = {
        "alice",
        "bob",
        "charlie",
        "dave",
        "eve",
    };
    std::cout << "There are " << employees.size() << " employees." << std::endl;
    print_vector(employees);
    std::string employee_to_rm;
    std::cout << "What employee do you remove? ";
    std::getline(std::cin, employee_to_rm);
    rm_from_vector(employees, employee_to_rm);
    std::cout << "There are " << employees.size() << " employees." << std::endl;
    print_vector(employees);
    return 0;
}
