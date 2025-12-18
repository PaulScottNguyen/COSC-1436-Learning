#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    
    cout << "Square Root of Pi is " << sqrt(PI) << endl;
    double r; cout << "Enter radius: "; cin >> r;

    cout << "The surface area of the sphere is: " << (4.0*PI*(r*r)) << endl;
    cout << "The volume of the sphere is: " << ((4.0/3.0)*PI*(r*r*r)) << endl;
}