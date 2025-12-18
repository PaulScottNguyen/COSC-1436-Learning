#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
    int length = str.length();           //Get the length of the string

    for (int i = 0; i < length / 2; i++) //Loop from start to halfway
        if (str[i] != str[length - 1 - i]) //Compare characters from both ends
            return false;               

    return true;                       
}

int main()
{
    string str; cout << "Enter a string: "; cin >> str;
    if (isPalindrome(str))
        cout << "Palindrome!";
    else
        cout << "Not Palindrome!";
}