#include <iostream>
using namespace std;

int main()
{
//Read the student ID and output the user email
	//Declare the variable for the student ID -> User
	string User;
	//Prompt the user for their ID
	cout << "Please enter your student ID: ";
	//Putback e into the istream
	cin.putback('e');
	//Read the string
	cin >> User;
	//Output to the user
	cout << "Your student ID is: " << User << "\n";
}