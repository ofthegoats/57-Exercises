#include <iostream>

using namespace std;

int main(void){
    float n1, n2 = 0;

    cout << "What is the first number? ";
    cin >> n1;

    cout << "What is the second number? ";
    cin >> n2;

    cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;

    return 0;
}
