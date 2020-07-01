#include <iostream>

using namespace std;

float to_celsius(float F) { return (F - 32) * 5/9; }
float to_fahrenheit(float C) { return (C * 9/5) + 32; }

int main(void)
{
    char choice;
    cout << "Press C to convert from Fahrenheit to Celsius." << endl;
    cout << "Press F to convert from Celsius to Fahrenheit." << endl;
    cout << "Your choice: ";
    cin >> choice;
    choice = tolower(choice);

    float temp;
    switch (choice) {
        case 'c':
            cout << "Please enter the temperature in Fahrenheit: ";
            cin >> temp;
            cout << "The temperature in Celsius is " << to_celsius(temp) << endl;
            break;
        case 'f':
            cout << "Please enter the temperature in Celsius: ";
            cin >> temp;
            cout << "The temperature in Fahrenheit is " << to_fahrenheit(temp) << endl;
            break;
        default:
            cout << "Not a valid selection." << endl;
    }

    return 0;

}
