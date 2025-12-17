#include <iostream>
using namespace std;

int main()
{
    int previous1, previous2, current, k = 0;
    cout << "\nThe first 10 Fibonacci numbers (using for):\n";
    //print out the first 2 Fibonacci numbers
    previous1 = 1; previous2 = 1;
    cout << previous1 << " " << previous2 << " ";
    //START LOOPING
    for (k = 3; k <= 10; k++)
    {
    current = previous1 + previous2;
    previous2 = previous1;
    previous1 = current;
    cout << current << " ";
    }
}