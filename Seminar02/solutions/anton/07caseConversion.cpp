#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (islower(ch)) {
        cout << char(toupper(ch)) << endl;
    } else if (isupper(ch)) {
        cout << char(tolower(ch)) << endl;
    } else {
        cout << "Invalid character" << endl;
    }

    return 0;
}
