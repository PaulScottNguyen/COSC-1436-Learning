#include <iostream>
using namespace std;

int main()
{
    //Read the name and initial 
	//Declare variable for Initial
	char Initial;
	//Declare variable for Name
	string Name;
	//Prompt for the name
	cout << "What's your name? ";
	//Read the name
	Initial = cin.peek();
	cin >> Name;
	//Output the name and initial
	cout << "Hello \"" << Name << "\"! Your initial is \'" << Initial << "\'!";
}