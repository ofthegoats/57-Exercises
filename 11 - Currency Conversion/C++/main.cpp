#include <iostream>

using namespace std;

int main(void)
{
    float nEUR, rate;

    cout << "How many euros are you exchanging? €";
    cin >> nEUR;
    cout << "What's the exchange rate? ";
    cin >> rate;

    cout << nEUR << " euros at a rate of " << rate << "% is " 
         << nEUR * rate/100 << " U.S. dollars." << endl;

    return 0;
}
