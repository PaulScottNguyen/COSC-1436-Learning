#include <iostream>
using namespace std;
int main()
{
    float LitersOfMilk;
    cout << "Enter the number of liters of milk produced today: "; cin >> LitersOfMilk;
    float NumberOfCartons;
    NumberOfCartons = (LitersOfMilk / 3.78) + 1;
    NumberOfCartons = static_cast<int>(NumberOfCartons);
    cout << "The number of cartons needed is " << NumberOfCartons;

    cout << "\nThe cost of producing milk is " << LitersOfMilk * 0.38;
    cout << "\nThe profit is " << NumberOfCartons * 0.27;
}