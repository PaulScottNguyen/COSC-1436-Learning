#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double kilograms, pounds;

    // Prompt user for input
    cout << "Enter weight in kilograms: ";
    cin >> kilograms;

    // Convert to pounds
    pounds = kilograms * 2.2;

    // Set precision and display results
    cout << fixed << setprecision(2);
    cout << "Weight in kilograms: " << kilograms << " kg" << endl;
    cout << "Equivalent weight in pounds: " << pounds << " lbs" << endl;

    return 0;
}
