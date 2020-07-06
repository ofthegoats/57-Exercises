#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool isnumeric(const string check)
{
    for (char c : check) {
        if (!isdigit(c) && c != '.') {
            return false;
        }
    } return true;
}

float finput(const string output)
{
    string hold = "NaN";
    while (true) {
        cout << output;
        cin >> hold;
        if (isnumeric(hold)) {
            return strtof(hold.c_str(), 0);
        } else {
            continue;
        }
    }
}

inline float calculate_bmi(float weight, float height)
{
    return (weight / (height * height)) * 703;
}

int main()
{
    float weight = finput("What is your weight in pounds? ");
    float height = finput("What is your height in inches? ");
    float bmi    = calculate_bmi(weight, height);
    cout << "Your BMI is " << bmi << endl;

    if (bmi < 18.5) {
        cout << "You are underweight. Go see a doctor" << endl;
    } else if (bmi > 25) {
        cout << "You are overweight. Go see a doctor" << endl;
    } else {
        cout << "You are in the ideal weight range." << endl;
    }

    return 0;
}
