#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three digits: ";
    cin >> a >> b >> c;

     int largest, middle, smallest;

    if (a >= b && a >= c) {
        largest = a;
        if (b >= c) {
            middle = b;
            smallest = c;
        } else {
            middle = c;
            smallest = b;
        }
    } else if (b >= a && b >= c) {
        largest = b;
        if (a >= c) {
            middle = a;
            smallest = c;
        } else {
            middle = c;
            smallest = a;
        }
    } else {
        largest = c;
        if (a >= b) {
            middle = a;
            smallest = b;
        } else {
            middle = b;
            smallest = a;
        }
    }


    int maxNumber = (largest * 100) + (middle * 10) + smallest;


    cout << "The largest number is: " << maxNumber << endl;

    return 0;
}
