#include <iostream>
#include <cctype>  // for toupper
using namespace std;

int main() 
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    // Convert each character to uppercase
    for (int i = 0; str[i] != '\0'; i++) 
    {
        str[i] = toupper(str[i]);
    }

    cout << "Uppercase version: " << str << endl;

    return 0;
}
