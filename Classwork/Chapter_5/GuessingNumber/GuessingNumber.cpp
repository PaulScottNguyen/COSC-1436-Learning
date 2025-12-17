#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int secretNumber, guess;
    
    // Seed random number generator
    srand(static_cast<unsigned int>(time(0)));
    secretNumber = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Guess the number (between 1 and 100): ";

    do {
        cin >> guess;

        if (guess < secretNumber)
            cout << "Too low. Try again: ";
        else if (guess > secretNumber)
            cout << "Too high. Try again: ";
        else
            cout << "Congratulations! You guessed the number!" << endl;

    } while (guess != secretNumber);

    return 0;
}
