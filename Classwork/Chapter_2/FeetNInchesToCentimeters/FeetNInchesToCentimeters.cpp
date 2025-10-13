#include <iostream>
using namespace std;
int main()
{
    //Allocate variables
    float feet, inch, centimeter;
    //Get feet input
    cout << "Enter feet: "; cin >> feet;
    //Get inch input
    cout << "Enter inches: "; cin >> inch;
    //Allocate TotalInch, convert to total inch
    float TotalInch = (feet * 12) + inch;
    //Convert to centimeter
    centimeter = TotalInch * 2.54;
    //Output result
    cout << "The total in centimeter is: " << centimeter << " cm" << endl;
}