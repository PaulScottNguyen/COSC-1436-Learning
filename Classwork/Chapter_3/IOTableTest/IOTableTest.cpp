#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	//Read the values from a file
	//Declare and open the file
	ifstream in("DataFile.txt");
	
	//Read data from file
	//Allocate memory
	string Name1, Name2, Name3;
	float Number1, Number2, Number3;
	
	cout << "Reading from DataFile.txt...\n";
	in >> Name1; in >> Number1; //Input data for Name1, Number1
	in >> Name2; in >> Number2; //Input data for Name2, Number2
	in >> Name3; in >> Number3; //Input data for Name3, Number3
	
	cout << "Reading from DataFile.txt completed!\n";
	//Close the file
	in.close();

	//Output the values in a table format using setw
	cout << "\nThe table formatted using setw\n\n";
	//Format the floats
	cout << fixed << setprecision(2);
	//heading
	cout << setw(11) << left << setfill(' ') << "NAME" << " | "
		 << setw(9) << left << setfill(' ') << "PRICE" << "\n";
	//Lines
	cout << setw(10) << left << setfill('_') << "_" << " _|_ "
		 << setw(9) << left << setfill('_') << "_" << "\n";
	
	//rows
	cout << setw(11) << left << setfill(' ') << Name1 << " | "
		 << setw(9) << right << setfill(' ') << Number1 << "\n";
	
	cout << setw(11) << left << setfill(' ') << Name2 << " | "
		 << setw(9) << right << setfill(' ') << Number2 << "\n";
	
	cout << setw(11) << left << setfill(' ') << Name3 << " | "
		 << setw(9) << right << setfill(' ') << Number3 << "\n";

	//Output the table into a file

	//Declare and open the file
	ofstream out("OutputFile.txt");

	//Write into the file
	//heading
	out << setw(11) << left << setfill(' ') << "NAME" << " | "
		<< setw(9) << left << setfill(' ') << "PRICE" << "\n";
	//Lines
	out << setw(10) << left << setfill('_') << "_" << " _|_ "
		<< setw(9) << left << setfill('_') << "_" << "\n";

	//rows
	out << setw(11) << left << setfill(' ') << Name1 << " | "
		<< setw(9) << right << setfill(' ') << Number1 << "\n";

	out << setw(11) << left << setfill(' ') << Name2 << " | "
		<< setw(9) << right << setfill(' ') << Number2 << "\n";

	out << setw(11) << left << setfill(' ') << Name3 << " | "
		<< setw(9) << right << setfill(' ') << Number3 << "\n";

	//Prompt the user
	cout << "Writing into OutputFile.txt...\n";
	cout << "Writing into OutputFile.txt completed!\n";
	//Close the file
	out.close();
}