#include <iostream>
using namespace std;

bool isVowel(char character) //a e o u i
{
    character = tolower(character);
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') 
        return true;               
    else
        return false;                       
}

int main()
{
    char character; cout << "Enter an alphabet character: "; cin >> character;
    if (isVowel(character))
        cout << "The character is a vowel!";
    else
        cout << "The character is not a vowel!";
}