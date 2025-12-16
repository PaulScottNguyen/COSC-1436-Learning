#include <iostream>
using namespace std;

int main()
{
    //Code goes here

    //START

    //INPUT
    float N1, N2;
    cout << "Please enter number N1: "; cin >> N1;
    cout << "Please enter number N2 (not 0): "; cin >> N2;

    //OUTPUT    
    while (N2 == 0)
    {
        cout << "Cannot divide by 0!\n";
        cout << "Please enter number N2 (not 0): "; cin >> N2;
    }

    float Div = N1 / N2;
    cout << N1 << " / " << N2 << " = " << Div;
    

    //STOP
}