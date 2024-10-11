#include <iostream>

using namespace std;

int main() {
    int day, month;

    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "Invalid month" << endl;
        return 0;
    }

    int daysInMonth;
    if (month == 2) {
        daysInMonth = 28; 
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30; 
    } else {
        daysInMonth = 31; 
    }

    if (day < 1 || day > daysInMonth) {
        cout << "Invalid day" << endl;
        return 0;
    }

    day++;
    if (day > daysInMonth) {
        day = 1;
        month++;
        if (month > 12) {
            month = 1; 
        }
    }

    cout << "Next date: " << day << " " << month << endl;

    return 0;
}
