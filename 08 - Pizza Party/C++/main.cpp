#include <iostream>

using namespace std;

int main(void)
{
    int people, pizzas, slices = 0;

    cout << "How many people? ";
    cin >> people;
    cout << "How many pizzas? ";
    cin >> pizzas;
    cout << "How many slices per pizza? ";
    cin >> slices;

    cout << endl;

    cout << people << " people with " << pizzas << " pizzas, " << slices << " each." << endl;
    cout << "Each person gets " << ( pizzas * slices ) / people << " pieces of pizza." << endl;
    cout << "There are " << ( pizzas * slices ) % people << " pieces left over." << endl;

    return 0;
}
