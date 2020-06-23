#include <iostream>

using namespace std;

string stdinput(string phrase){
    string input;
    cout << phrase;
    getline(cin, input);
    return input;
}

int main(void)
{
    string noun, verb, adjective, adverb;

    noun = stdinput("Enter a noun: ");
    verb = stdinput("Enter a verb: ");
    adjective = stdinput("Enter a adjective: ");
    adverb = stdinput("Enter a adverb: ");

    cout << "Do you " << verb << " your " << adjective << " " << noun << " quickly? That's hilarious!" << endl;

    return 0;
}
