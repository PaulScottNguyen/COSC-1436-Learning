#include <iostream>
#include <string>
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char character)
{
    string vowels = "aeiouAEIOU";
    return vowels.find(character) != string::npos;
}

int main()
{
    string input;
    int vowelCount = 0;

    cout << "Enter a sequence of characters: ";
    getline(cin, input);

    for (char c : input)
    {
        if (isVowel(c))
            vowelCount++;
    }

    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
