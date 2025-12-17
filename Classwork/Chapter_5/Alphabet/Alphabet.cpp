#include <iostream>
using namespace std;

int main()
{
    int k;
    /*
    cout << "\nThe alphabet (using for):\n";
    for (k = 65; k <= 90; k++) ASCII numbers
        cout << char(k) << " ";
    */

    cout << "\nThe alphabet (using for):\n";
    for (k = 'A'; k <= 'Z'; k++) //'A' is character A = 65
        cout << static_cast<char>(k) << " ";
}