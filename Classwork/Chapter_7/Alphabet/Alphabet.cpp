#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Alphabet;
    char c;
    for (c = 'A'; c <= 'Z'; c++)
        Alphabet = Alphabet + c + " ";
    cout << "The string Alphabet is " << Alphabet;
}