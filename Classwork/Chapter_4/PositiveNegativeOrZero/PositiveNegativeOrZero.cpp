#include <iostream>
using namespace std;

int main() {
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Nested if to determine the sign of the number
    if (number >= 0) {
        if (number == 0) {
            cout << "The number is zero." << endl;
        } else {
            cout << "The number is positive." << endl;
        }
    } else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
