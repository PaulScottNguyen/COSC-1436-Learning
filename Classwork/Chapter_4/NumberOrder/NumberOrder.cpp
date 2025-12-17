#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double num1, num2, num3;

    // Prompt user for input
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Store numbers in an array
    double numbers[3] = {num1, num2, num3};

    // Sort the array
    sort(numbers, numbers + 3);

    // Display sorted numbers
    cout << "Numbers in ascending order: ";
    for (int i = 0; i < 3; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
