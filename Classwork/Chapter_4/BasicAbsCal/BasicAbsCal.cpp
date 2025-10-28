#include <iostream>
using namespace std;

int main()
{
    float Number; cout << "Please enter an int value: "; cin >> Number;
    
    if (Number < 0) 
        Number = -Number; 
    cout << Number;
}