#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int popA, popB;
    double rateA, rateB;
    int years = 0;

    // Prompt user for input
    cout << "Enter population of town A: ";
    cin >> popA;

    cout << "Enter growth rate of town A (in %): ";
    cin >> rateA;

    cout << "Enter population of town B: ";
    cin >> popB;

    cout << "Enter growth rate of town B (in %): ";
    cin >> rateB;

    // Convert rates to decimal
    rateA /= 100.0;
    rateB /= 100.0;

    // Calculate number of years until town A surpasses or equals town B
    while (popA < popB)
    {
        popA += static_cast<int>(popA * rateA);
        popB += static_cast<int>(popB * rateB);
        years++;
    }

    // Display results
    cout << fixed << setprecision(0);
    cout << "After " << years << " year(s):" << endl;
    cout << "Population of town A: " << popA << endl;
    cout << "Population of town B: " << popB << endl;

    return 0;
}
