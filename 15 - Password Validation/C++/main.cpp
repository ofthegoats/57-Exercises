#include <iostream>
#include <map>
#include <string>

using namespace std;

// would love to implement hashing here, but my C/C++ is definitely not good enough for that
const map<string, string> KNOWN = {
    { "piokozi", "password" },
};

bool validate(string user, string pass)
{
    if (KNOWN.count(user) == 0) { // user does not exist
        return false;
    } else if (pass != KNOWN.at(user)) { // wrong password
        return false;
    } else { // all details correct
        return true;
    }
}

int main(void)
{
    string username, password;
    bool successful;

    cout << "username: ";
    getline(cin, username);
    cout << "password: ";
    getline(cin, password);

    successful = validate(username, password);

    if (successful) {
        cout << "Welcome!" << endl;
        return 0;
    } else {
        cout << "I don't know you." << endl;
        return 0;
    }
}
