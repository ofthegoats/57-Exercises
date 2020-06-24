#include <iostream>

using namespace std;

int main(void)
{
    float amount, tax = 0;
    cout << "What is the amount? £";
    cin >> amount;

    // clearing stdin buffer
    while (getchar() != '\n');

    string state = "";
    cout << "What is the state? ";
    getline(cin, state);

    if (state == "WI") {
        tax = amount * 0.055;
        cout << "The tax is £" << tax << endl;
    }

    cout << "The total is " << amount + tax << endl;

    return 0;
}
