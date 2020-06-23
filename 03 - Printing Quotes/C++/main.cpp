#include <iostream>
#include <stdio.h>
#include <string>

#define MAX_SIZE 200

using namespace std;

int main(void)
{
    string quote, name;

    cout << "What is the quote? ";
    getline(cin, quote);
    cout << "Who said it? ";
    getline(cin, name);

    cout << name << " says, \"" << quote << ".\"" << endl;

    return 0;
}
