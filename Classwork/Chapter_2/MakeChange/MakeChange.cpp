#include <iostream>
using namespace std;
int main()
{
    //Allocate constants
    const int QUARTER = 25;
    const int DIME = 10;
    const int NICKEL = 5;
    const int PENNY = 1;
    
    //Allocate change, prompt for user input
    int change; cout << "Enter change amount (in cents): "; cin >> change;
    //Assure user input
    cout << "You entered: " << change << " cents" << endl;
    //Algorithm to convert into quaters, dimes, nickels
    //Calculate how many quaters
    int quarters = change / QUARTER;
    //Calculate remaining change
    change = change % QUARTER;
    //Calculate how many dimes
    int dimes = change / DIME;
    //Calculate remaining change
    change = change % DIME;
    //Calculate how many nickels
    int nickels = change / NICKEL;
    //Calculate remaining change
    change = change % NICKEL;
    //Calculate how many pennies
    int pennies = change / PENNY;
    //Calculate remaining change
    change = change % PENNY;
    //Output result
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;   
}