#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //Allocate variables
    float Number, RoundedNumber;
    //Prompt for user input
    cout << "Enter a floating point number: "; cin >> Number;
    //Round the number
    RoundedNumber = round(Number);
    //Output result
    cout << "The rounded number is: " << RoundedNumber << endl;
}