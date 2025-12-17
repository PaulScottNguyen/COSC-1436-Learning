#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int Min, Max, Number, NumberOfNumbers, Sum, Average;
    //READ NUMBERS FROM A FILE, COMPUTE THE NUMBER OF NUMBERS, SUM, AVERAGE, MINIMUM, MAXIMUM
    cout << "\n\nEOF-CONTROLLED LOOP" << "\n";

    Min = INT_MAX;
    Max = INT_MIN;
    Number = 0;
    NumberOfNumbers = 0;
    Sum = 0;
    //open the file
    ifstream in("Numbers.txt");
    //read from the file
    //loop
    do
    {
        //read from the file
        in >> Number;

        //CHECK if we passed the end of the file
        if (in.eof())
            break;
        //loop statement

        //Update the statistic
        //Update statistics
        Sum = Sum + Number;

        //Check minimum
        if (Number < Min)
            Min = Number;
        if (Number > Max)
            Max = Number;
        NumberOfNumbers++;
    } 
    while (in);

    //check if we read any numbers
    if (NumberOfNumbers > 0)
    {
        //Compute the average
        //Output the statistics
        cout << "The number of numbers is " << NumberOfNumbers << "\n";
        cout << "The sum of the numbers is " << Sum << "\n";
        Average = static_cast<float>(Sum) / NumberOfNumbers;
        cout << "The average of the numbers is " << Average << "\n";
        cout << "The minimum of the numbers is " << Min << "\n";
        cout << "The maximum of the numbers is " << Max << "\n\n";
        cout << "\n\n";
    }
    else
        cout << "There are no numbers!\n\n";
    
    in.close();
}