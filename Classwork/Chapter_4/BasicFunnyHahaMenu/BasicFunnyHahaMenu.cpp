#include <iostream>
using namespace std;

int main()
{
//enter option A, B, C
char option;
cout << "Select your choice: \n"
    << "\t A for CAT\n"
    << "\t B for DOG\n"
    << "\t C for DUCK\n";
cin >> option;
cout << "You selected " << option << "\n\n";
//Compute the name using nested if
string Name;
if (option == 'A')
    Name = "CAT";
else
    if (option == 'B')
        Name = "DOG";
    else
        if (option == 'C')
            Name = "DUCK";
        else
            Name = "ERROR";
cout << "The name for your option (using nested if) is " << Name << "\n\n";
}