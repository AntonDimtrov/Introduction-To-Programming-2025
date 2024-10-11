#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Enter a char: ";
    cin >> ch;

    if (isalpha(ch)) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << "Not a letter." << endl;
    }

    return 0;
}
