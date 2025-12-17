#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double diagonal, length, width, area;
    int choice;

    // Prompt user for diagonal and TV type
    cout << "Enter the diagonal length of the TV (in inches): ";
    cin >> diagonal;

    cout << "Select TV type:\n";
    cout << "1. Traditional TV (4:3)\n";
    cout << "2. LCD TV (16:9)\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Set output formatting
    cout << fixed << setprecision(2);

    if (choice == 1)
    {
        // 4:3 ratio
        const double ratioLength = 4.0;
        const double ratioWidth = 3.0;
        double scale = diagonal / sqrt(pow(ratioLength, 2) + pow(ratioWidth, 2));
        length = ratioLength * scale;
        width = ratioWidth * scale;
    }
    else if (choice == 2)
    {
        // 16:9 ratio
        const double ratioLength = 16.0;
        const double ratioWidth = 9.0;
        double scale = diagonal / sqrt(pow(ratioLength, 2) + pow(ratioWidth, 2));
        length = ratioLength * scale;
        width = ratioWidth * scale;
    }
    else
    {
        cout << "Invalid choice. Please run the program again and select 1 or 2." << endl;
        return 1;
    }

    // Calculate area
    area = length * width;

    // Display results
    cout << "Screen Length: " << length << " inches" << endl;
    cout << "Screen Width: " << width << " inches" << endl;
    cout << "Screen Area: " << area << " square inches" << endl;

    return 0;
}
