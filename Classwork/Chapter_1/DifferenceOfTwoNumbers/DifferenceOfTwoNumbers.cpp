#include <iostream>
using namespace std;

int main()
{
    //Code goes here
    
    //Program receive 2 values N1 & N2 then compute the difference N1-N2 and N2-N1

    //START

    //INPUT
    float N1, N2;
    cout << "Please enter number N1: "; cin >> N1;
    cout << "Please enter number N2: "; cin >> N2;

    //COMPUTE
    float Dif1 = N1 - N2;
    float Dif2 = N2 - N1;

    //OUTPUT
    cout << N1 << " - " << N2 << " = " << Dif1 << endl;
    cout << N2 << " - " << N1 << " = " << Dif2 << endl;
    
    //STOP
}