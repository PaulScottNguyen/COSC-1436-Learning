#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter int value for num1: "; cin >> num1;
    cout << "Enter int value for num2: "; cin >> num2;
    cout << "Enter int value for num3: "; cin >> num3;

    float average = (num1 + num2 + num3) / 3;

    cout << "The average is " << average;
}