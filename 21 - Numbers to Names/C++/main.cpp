#include <iostream>

std::string month(const int number)
{
    switch (number) {
        case 1:  return "January";
        case 2:  return "Februrary";
        case 3:  return "March";
        case 4:  return "April";
        case 5:  return "May";
        case 6:  return "June";
        case 7:  return "July";
        case 8:  return "August";
        case 9:  return "September";
        case 10: return "October";
        case 11: return "Novermber";
        case 12: return "December";
        default: return "NOT A MONTH";
    }
}

int main()
{
    int number;
    std::cout << "Please enter the number of the month: ";
    std::cin >> number;

    std::cout << month(number) << std::endl;
}
