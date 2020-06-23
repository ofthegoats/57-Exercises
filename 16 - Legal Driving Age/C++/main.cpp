#include <iostream>

using namespace std;

int main(void)
{
    int age = 0;

    cout << "What is your age? ";
    cin >> age;

    if (age >= 16) {
        cout << "You are old enough to legally drive." << endl;
        return 0;
    } else {
        cout << "You are not old enough to legally drive." << endl;
        return 0;
    }
}
