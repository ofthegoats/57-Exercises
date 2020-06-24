#include <iostream>
#include <ctime>

using namespace std;

int main(void)
{
    time_t t = time(0);
    tm *now = localtime(&t);

    int current_age, retire_age = 0;

    cout << "What is your current age? ";
    cin >> current_age;
    cout << "At what age would you like to retire? ";
    cin >> retire_age;

    int years_left = retire_age - current_age;

    if (years_left <= 0) {
        cout << "You can already retire!" << endl;
        return 0;
    } else {
        cout << "You have " << years_left << " years left until you can retire." << endl;
        cout << "It's " << (now->tm_year) + 1900 << ", so you can retire in " << (now->tm_year) + 1900 + years_left << "." << endl;
        return 0;
    }
}
