#include <iostream>
using namespace std;

int main()
{
    //Read 5 numbers from the user and compute sum, average, minimum, and maximum of the numbers
    int Counter;
    int Min = INT_MAX;
    int Max = INT_MIN;
    //Declare and initialize the statistic variable
    int Sum = 0; float Average;
    for (Counter = 0; Counter < 5; Counter++)
    {
        int Number;
        cout << "Enter an integral number: "; cin >> Number;
        cout << "You entered: " << Number << "\n";
        //Update statistics
        Sum = Sum + Number;

        //Check minimum
        if (Number < Min)
            Min = Number;
        if (Number > Max)
            Max = Number;
    }

    //Output the statistics
    cout << "The sum of the numbers is " << Sum << "\n";
    Average = static_cast<float>(Sum)/5;
    cout << "The average of the numbers is " << Average << "\n";
    cout << "The minimum of the numbers is " << Min << "\n";
    cout << "The maximum of the numbers is " << Max << "\n\n";
}