#include <iostream>
using namespace std;
int main()
{
    //Allocate variables
    int seconds, minutes, hours, days;
    //Prompt for user input
    cout << "Enter the number of seconds: "; cin >> seconds;
    //Calculate days, hours, minutes, seconds
    days = seconds / 86400; // 86400 seconds in a day
    seconds = seconds % 86400;
    hours = seconds / 3600; // 3600 seconds in an hour
    seconds = seconds % 3600;
    minutes = seconds / 60; // 60 seconds in a minute
    seconds = seconds % 60;
    //Output result
    cout << "Days: " << days << endl;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
}