#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayOfYear(int month, int day, int year)
{
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (isLeapYear(year))
        daysInMonth[1] = 29; // February has 29 days in leap year

    int totalDays = 0;
    for (int i = 0; i < month - 1; i++)
        totalDays += daysInMonth[i];

    totalDays += day;
    return totalDays;
}

int main()
{
    int month, day, year;
    cout << "Enter date (month day year): ";
    cin >> month >> day >> year;

    int result = dayOfYear(month, day, year);
    cout << "Day number of the year: " << result << endl;

    return 0;
}
