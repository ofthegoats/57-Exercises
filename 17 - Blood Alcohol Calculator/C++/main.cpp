#include <iostream>
#include <algorithm>

using namespace std;

float get_float(string output)
{
    float temp = 0;
    cout << output;
    cin >> temp;
    return temp;
}

bool string_in_array(string s , string a[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] == s) {
            return true;
        }
    }
    return false;
}

float calculate_bac(float A, float W, float r, float H)
{
    return ( A * 5.14/W * r ) - 0.015 * H;
}

int main(void)
{
    float alcohol, weight, hours, bac = 0;
    string MALE[3] = { "m", "male", "man" };
    string FEMALE[3] = { "f", "female", "woman" };

    alcohol = get_float("How much alcohol have you consumed in oz.? ");
    weight  = get_float("How much do you weight? ");
    hours   = get_float("How many hours ago was your last drink? ");

    while ( 1 ) {
        string sex = "";
        cout << "What is your biological sex? ";
        cin >> sex;
        transform(sex.begin(), sex.end(), sex.begin(), ::tolower);
        if ( string_in_array(sex, MALE, sizeof(MALE)) ) {
            bac = calculate_bac(alcohol, weight, 0.73, hours);
            break;
        } else if ( string_in_array(sex, FEMALE, sizeof(FEMALE)) ) {
            bac = calculate_bac(alcohol, weight, 0.66, hours);
            break;
        }
    }

    cout << "Your BAC is: " << bac << endl;

    if (bac >= 0.08) {
        cout << "It is not legal for you to drive." << endl;
    } else {
        cout << "It is legal for you to drive." << endl;
    }

    return 0;
}
