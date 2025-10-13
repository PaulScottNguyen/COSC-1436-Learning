#include <iostream>
using namespace std;
int main()
{
    //Allocate constants
    const float OvertimeRate = 1.5;
    const float StandardHours = 40.0;
    //Allocate variables
    float HourlyWage, HoursWorked, WeeklyWage;
    //Prompt for user input
    cout << "Enter your hourly wage: "; cin >> HourlyWage;
    cout << "Enter the number of hours you worked this week: "; cin >> HoursWorked;
    //Calculate weekly wage
    if (HoursWorked <= StandardHours)
        WeeklyWage = HourlyWage * HoursWorked;
    else
        WeeklyWage = (HourlyWage * StandardHours) + (HourlyWage * OvertimeRate * (HoursWorked - StandardHours));
    //Output result
    cout << "Your weekly wage is: $" << WeeklyWage << endl;
}