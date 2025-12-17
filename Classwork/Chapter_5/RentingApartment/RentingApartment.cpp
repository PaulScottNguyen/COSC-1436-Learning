#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int totalUnits;
    double baseRent, rentIncrease, maintenanceCost;

    // Prompt user for input
    cout << "Enter total number of units: ";
    cin >> totalUnits;

    cout << "Enter base rent to occupy all units: ";
    cin >> baseRent;

    cout << "Enter rent increase that causes one vacancy: ";
    cin >> rentIncrease;

    cout << "Enter monthly maintenance cost per rented unit: ";
    cin >> maintenanceCost;

    int maxUnitsRented = 0;
    double maxProfit = 0.0;

    // Try all possible numbers of vacant units from 0 to totalUnits
    for (int vacant = 0; vacant <= totalUnits; ++vacant)
    {
        int rentedUnits = totalUnits - vacant;
        double currentRent = baseRent + rentIncrease * vacant;
        double revenue = rentedUnits * currentRent;
        double cost = rentedUnits * maintenanceCost;
        double profit = revenue - cost;

        if (profit > maxProfit)
        {
            maxProfit = profit;
            maxUnitsRented = rentedUnits;
        }
    }

    // Display result
    cout << fixed << setprecision(2);
    cout << "To maximize profit, rent out " << maxUnitsRented << " units." << endl;
    cout << "Maximum profit: $" << maxProfit << endl;

    return 0;
}
