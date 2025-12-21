#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    const int SIZE = 50;
    double alpha[SIZE];

    // Initialize first 25 elements to square of index
    for (int i = 0; i < 25; i++) 
    {
        alpha[i] = static_cast<double>(i * i);
    }

    // Initialize last 25 elements to three times the index
    for (int i = 25; i < SIZE; i++) 
    {
        alpha[i] = static_cast<double>(3 * i);
    }

    // Output 10 elements per line
    cout << fixed << setprecision(2);
    for (int i = 0; i < SIZE; ++i) {
        cout << setw(8) << alpha[i];
        if ((i + 1) % 10 == 0)
            cout << endl;
    }
}
