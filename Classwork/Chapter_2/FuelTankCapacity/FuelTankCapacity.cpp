#include <iostream>
using namespace std;
int main()
{
    //Allocate tank capacity and miles per gallon
    float tankCapacity, milesPerGallon, totalMiles;
    //Prompt for user input
    cout << "Enter the fuel tank capacity (in gallons): "; cin >> tankCapacity;
    cout << "Enter the fuel efficiency (in miles per gallon): "; cin >> milesPerGallon;
    //Calculate total miles
    totalMiles = tankCapacity * milesPerGallon;
    //Output result
    cout << "The total distance the vehicle can travel on a full tank is: " << totalMiles << " miles" << endl;
}