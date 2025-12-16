#include <iostream>
using namespace std;

int main()
{
    const double Pi = 3.14;
    double radius, area;
    cout << "Enter radius: "; cin >> radius;

    area = Pi * radius * radius;
    cout << "Area of the circle is: "; cout << area << endl;
    
    double circumference = 2 * Pi * radius;
    cout << "Circumference of the circle is: "; cout << circumference << endl;

}