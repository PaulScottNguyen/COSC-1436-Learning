#include <iostream>
using namespace std;

int main()
{
    int Number; cout << "Enter a number: "; cin >> Number;

    int k;
    cout << "\nThe odd numbers between 1 and "<< Number << " (using for):\n";
    for (k = 1; k <= Number; k=k+2)
    cout << k << " ";
}