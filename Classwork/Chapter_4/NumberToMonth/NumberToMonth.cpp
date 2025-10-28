#include <iostream>
using namespace std;

int main()
{
int MonthNumber; cout << "Enter the month number: "; cin >> MonthNumber;
string MonthName;
 if (MonthNumber == 1)
        MonthName = "January";
    else
        if (MonthNumber == 2)
            MonthName = "February";
        else
            if (MonthNumber == 3)
                MonthName = "March";
            else
                if (MonthNumber == 4)
                    MonthName = "April";
                else
                    if (MonthNumber == 5)
                        MonthName = "May";
                    else
                        if (MonthNumber == 6)
                            MonthName = "June";
                        else
                            if (MonthNumber == 7)
                                MonthName = "July";
                            else
                                if (MonthNumber == 8)
                                    MonthName = "August";
                                else
                                    if (MonthNumber == 9)
                                        MonthName = "September";
                                    else
                                        if (MonthNumber == 10)
                                            MonthName = "October";
                                        else
                                            if (MonthNumber == 11)
                                                MonthName = "November";
                                            else
                                                if (MonthNumber == 12)
                                                    MonthName = "December";
                                                else
                                                    MonthName = "ERROR";

    cout << "The month name (using nested if) is " << MonthName << "\n\n";
}