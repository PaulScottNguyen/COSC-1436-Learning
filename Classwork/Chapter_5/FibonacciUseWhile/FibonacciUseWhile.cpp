#include <iostream>
using namespace std;

int main()
{
    cout << "The first 10 Fibonacci numbers (using while):\n";
    //first Fibonacci number, second Fibonacci number
    int previous1 = 1; int previous2 = 1;
    //print out the first 2 Fibonacci numbers
    cout << previous1 << " " << previous2 << " ";
    //START LOOPING
    int k = 3; int current;
    while (k <= 10)
    {
    //LOOP STATEMENT
    current = previous1 + previous2;
    previous2 = previous1;
    previous1 = current;
    cout << current << " ";
    //STEP COUNTER
    k++;
    }
}