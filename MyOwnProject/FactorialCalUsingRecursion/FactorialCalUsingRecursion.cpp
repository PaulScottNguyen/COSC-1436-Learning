#include <iostream>
using namespace std;

long long factorial(long long n)
{
    if (n < 0)
    {
        cout << "Cannot do factorial to negative numbers!";
    }
    if (n == 1 || n == 0)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    long long n;
    cout << "Enter an integer number: ";
    cin >> n;

    cout << "\nThe answer to " << n << "! is: " << factorial(n);
}
