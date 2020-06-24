#include <iostream>

using namespace std;

float sfeet_to_smetres(float a)
{
    return a * 0.09290304;
}

int main(void)
{
    float length, width = 0;

    cout << "What is the length of the room in feet? ";
    cin >> length;

    cout << "What is the width of the room in feet? ";
    cin >> width;

    cout << "The area is" << endl << length * width << " square feet" << endl << sfeet_to_smetres(length * width) << " square metres" << endl;

    return 0;
}
