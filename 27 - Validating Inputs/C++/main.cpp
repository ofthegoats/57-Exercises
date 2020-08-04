#include <iostream>
#include <regex>
#include <string>

std::string get_string(std::string output)
{
    std::string input;
    std::cout << output;  // let input be formatted
    std::getline(std::cin, input);
    return input;
}

bool check_valid_name(std::string s)
{
    if (s.empty()) {
        std::cout << "Name must be filled in." << std::endl;
        return false;
    }
    if (std::regex_search(s, std::regex("(\\d+)"))) {
        std::cout << "\"" << s << "\" is not a valid name. It contains digits."
                  << std::endl;
        return false;
    }
    if (s.length() <= 2) {
        std::cout << "\"" << s << "\" is not a valid name. It is too short."
                  << std::endl;
        return false;
    }
    return true;
}

bool check_valid_zip(std::string s)
{
    if (s.empty()) {
        std::cout << "ZIP code must be filled in." << std::endl;
        return false;
    }
    if (std::regex_search(s, std::regex("(^\\d+$)"))) {
        return true;
    } else {
        std::cout << "ZIP code must be numeric." << std::endl;
        return false;
    }
}

bool check_valid_id(std::string s)
{
    if (s.empty()) {
        std::cout << "Employee ID must be filled in." << std::endl;
        return false;
    }
    if (std::regex_search(s, std::regex("^[a-zA-Z]{2}-\\d{4}$"))) {
        return true;
    } else {
        std::cout << "The ID must follow this format: AA-1234." << std::endl;
        return false;
    }
}

bool validate_input(std::string firstname,
    std::string lastname,
    std::string zipcode,
    std::string employeeid)
{
    bool validfn  = check_valid_name(firstname);
    bool validln  = check_valid_name(lastname);
    bool validzip = check_valid_zip(zipcode);
    bool validid  = check_valid_id(employeeid);

    return validfn && validln && validzip && validid;
}

int main()
{
    std::string firstname  = get_string("Enter the first name: ");
    std::string lastname   = get_string("Enter the last name: ");
    std::string zipcode    = get_string("Enter the ZIP code: ");
    std::string employeeid = get_string("Enter an employee ID: ");
    bool valid = validate_input(firstname, lastname, zipcode, employeeid);
    if (valid) {
        std::cout << "There were no errors found." << std::endl;
    } else {
        std::cout << "There were errors found." << std::endl;
    }
    return 0;
}
