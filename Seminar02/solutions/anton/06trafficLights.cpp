#include <iostream>

using namespace std;

int main() {
    int state;
    cout << "Enter traffic light state (1: Red, 2: Yellow, 3: Green): ";
    cin >> state;

    switch (state) {
        case 1:
            cout << "Stop!" << endl;
            break;
        case 2:
            cout << "Get ready!" << endl;
            break;
        case 3:
            cout << "Go!" << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
    }

    return 0;
}
