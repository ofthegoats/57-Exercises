#include <iostream>

using namespace std;

float inputf(string output)
{
    float temp;
    cout << output;
    cin >> temp;
    return temp;
}

int main(void)
{
    float principal, rate, time = 0;

    principal = inputf("Enter the principal: £");
    rate      = inputf("Enter the rate: %");
    time      = inputf("Enter the number of years: ");

    cout << "After " << time << " years at " << rate << "%, the investment will be worth £"
         << principal * (1 + (rate/100) * time) << endl;

    return 0;
}
