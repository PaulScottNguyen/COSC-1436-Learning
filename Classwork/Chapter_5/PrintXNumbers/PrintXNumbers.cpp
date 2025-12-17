#include <iostream>
using namespace std;

int main()
{
    int Number; cout << "Enter a number: "; cin >> Number;

    int k = 1;
    while (k <= Number)
    {
        cout << k << " ";
        k = k + 1; 
    }
}