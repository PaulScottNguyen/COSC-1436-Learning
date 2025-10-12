#include <iostream>
using namespace std;

int main()
{
	//1. Read an integral number N1 from the user, print the message "The number N1 is ValueN1"
	cout << "Please enter an integral number N1: ";

	//Allocate memory aka declare the variable
	int N1;

	//Put data in the memory
	cin >> N1;

	//Put data into variable ValueN1
	int ValueN1 = N1;

	//2. Read another number N2 from the user, print the message "The number N2 is ValueN2"
	cout << "Please enter another integral number N2 (do not enter 0): ";

	//Declare Variable N2
	int N2;

	//Put data into N2
	cin >> N2;

	//Put N2 value into Valuen2
	int ValueN2 = N2;

    //Allocate Div (integral), Assign Div & COMPUTE (N1/N2)=Div
    float Div = (static_cast<float>(N1)/static_cast<float>(N2));
    //OUTPUT the message
    cout << "The quotient of N1 and N2 is " << Div << "\n" << endl;

}