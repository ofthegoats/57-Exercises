#include <cmath>
#include <iostream>

double months_to_pay_off(double i, double b, double p) {
    const double nominator =
        log10(1.0 + b / p * (1.0 - pow(1.0 + i, 30))) * -1.0 / 30;
    return nominator / log10(1 + i);
}

int main() {
    double balance, apr, monthly = 0;
    std::cout << "What is your balance? ";
    std::cin >> balance;
    std::cout << "What is the APR on the card (as a percent)? ";
    std::cin >> apr;
    std::cout << "What is the monthly payment you can make? ";
    std::cin >> monthly;

    double months = ceil(months_to_pay_off(apr / 100 / 365, balance, monthly));

    std::cout << "It will take you " << months
              << " months to pay off this card." << std::endl;
    return 0;
}
