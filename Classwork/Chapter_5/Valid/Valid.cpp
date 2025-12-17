#include <iostream>
using namespace std;

int main()
{
    //Start, initialize the flag
    bool Isvalid = false;
    //Loop
    while (!Isvalid)
    {
        int Number;
        //Input the number
        cout << "Enter an integral number between 1 and 10: "; cin >> Number;
        cout << "You entered: " << Number << "\n";
        //Validate the number and update the flag
        if ((1 <= Number) && (Number <= 10))
        {
            cout << "The valid number is " << Number;
            Isvalid = true;
        }
        else
            cout << "The number is not valid! Try again!\n\n";
    }
}