#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the lengths of the three sides: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "This is a valid triangle." << endl;
    } else {
        cout << "This is not a valid triangle." << endl;
    }

    return 0;
}
