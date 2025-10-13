#include <iostream>
using namespace std;
int main()
{
    //Allocate variables
    float itemPrice, markupRate, salesTaxRate, finalPrice;
    //Prompt for user input
    cout << "Enter the item price: "; cin >> itemPrice;
    cout << "Enter the markup rate: "; cin >> markupRate;
    cout << "Enter the sales tax rate: "; cin >> salesTaxRate;
    //Calculate final price
    finalPrice = itemPrice * (1 + (markupRate / 100)) * (1 + (salesTaxRate / 100));
    //Output result
    cout << "The final price of the item is: $" << finalPrice << endl;
}