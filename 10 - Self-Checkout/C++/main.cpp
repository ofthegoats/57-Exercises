#include <iostream>

using namespace std;

int main(void)
{
    const float TAX = 0.055;
    int item_no = 0;
    cout << "What is the number of items? ";
    cin >> item_no;

    float total = 0;
    for (int i = 1; i <= item_no; i++)
    {
        float price = 0;
        int quantity  = 0;

        cout << "Enter the price of item " << i << ": £";
        cin >> price;
        cout << "Enter the quantity of item " << i << ": ";
        cin >> quantity;

        total += price * quantity;
    }

    cout << "Subtotal: £" << total << endl;
    cout << "Tax: £" << total * TAX << endl;
    cout << "Total: £" << total * (TAX + 1) << endl;

    return 0;
}
