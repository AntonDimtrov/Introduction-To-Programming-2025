#include <iostream>

using namespace std;

int main() {
    int percentage;
    cout << "Enter the percentage: ";
    cin >> percentage;

    cout << "Grade: ";
    if (percentage >= 90) cout << "6+" << endl;
    else if (percentage >= 80) cout << "6" << endl;
    else if (percentage >= 70) cout << "5" << endl;
    else if (percentage >= 60) cout << "4" << endl;
    else if (percentage >= 40) cout << "3" << endl;
    else cout << "2" << endl;

    return 0;
}
