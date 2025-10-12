#include <iostream>
using namespace std;

int main()
{
	//CODE GOES HERE
	//1. Read an integral number N1 from the user, print the message "The number N1 is ValueN1"

	//START
	//INPUT N1
	//Prompt the user for the number
	cout << "Please enter an integral number N1: ";

	//Allocate memory aka declare the variable
	int N1;

	//Put data in the memory
	cin >> N1;

	//Put data into variable ValueN1
	int ValueN1 = N1;

	//OUTPUT ValueN1
	cout << "The number N1 is " << ValueN1 << "\n" << endl;

	//STOP

	//2. Read another number N2 from the user, print the message "The number N2 is ValueN2"
	
	//START
	//INPUT N2
	//Prompt the user for N2
	cout << "Please enter another integral number N2 (do not enter 0): ";

	//Declare Variable N2
	int N2;

	//Put data into N2
	cin >> N2;

	//Put N2 value into Valuen2
	int ValueN2 = N2;

	//OUTPUT ValueN2
	cout << "The number N2 is " << ValueN2 << "\n" << endl;

	//STOP
}