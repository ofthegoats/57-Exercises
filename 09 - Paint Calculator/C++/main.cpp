#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float w, l = 0;
    const int SFEET_PER_GALLON = 350;

    cout << "What is the width? ";
    cin >> w;
    cout << "What is the length? ";
    cin >> l;

    cout << "You will need to purchase " << ceil( ( w * l ) / 350 ) << " gallons of paint to cover " << w * l << " square feet." << endl;

    return 0;
}
