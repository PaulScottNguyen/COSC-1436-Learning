#include <iostream>
using namespace std;
int main()
{
    double Number; cout << "Please enter a number: "; cin >> Number;
    if (Number > 0)
        cout << "Positive number!";
    else
        if (Number < 0)
        cout << "Negative number!";
        else
            cout << "Number is 0!";
}