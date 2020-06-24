#include <iostream>
#include <cmath>

using namespace std;

float inputf(string output)
{
    cout << output;
    float t;
    cin >> t;
    return t;
}

int main(void)
{
    float principal, rate, time, compounded_per_year = 0;

    principal           = inputf("Enter the principal: £");
    rate                = inputf("Enter the rate: %");
    time                = inputf("Enter the number of years: ");
    compounded_per_year = inputf("Enter the number of times the investment is compounded per year: ");

    cout << "The investment will be worth: £"
         << principal * powf( (1 + (rate/100)/compounded_per_year), compounded_per_year * time )
         << endl;

}
