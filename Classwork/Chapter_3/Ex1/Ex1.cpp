#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // Declare file stream variables
    ifstream inFile;
    ofstream outFile;

    // Open input and output files
    inFile.open("inData.txt");
    outFile.open("outData.txt");

    // Declare variables
    string firstName, lastName, department;
    double grossSalary, bonusPercent, taxPercent;
    double distance, travelTime;
    int cupsSold;
    double costPerCup;

    // Read data from input file
    inFile >> firstName >> lastName >> department;
    inFile >> grossSalary >> bonusPercent >> taxPercent;
    inFile >> distance >> travelTime;
    inFile >> cupsSold >> costPerCup;

    // Perform calculations
    double bonusAmount = grossSalary * (bonusPercent / 100.0);
    double taxAmount = grossSalary * (taxPercent / 100.0);
    double paycheck = grossSalary + bonusAmount - taxAmount;
    double averageSpeed = distance / travelTime;
    double salesAmount = cupsSold * costPerCup;

    // Set output formatting
    outFile << fixed << setprecision(2);

    // Write formatted output to file
    outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl;
    outFile << "Monthly Gross Salary: $" << grossSalary
            << ", Monthly Bonus: " << bonusPercent << "%, Taxes: " << taxPercent << "%" << endl;
    outFile << "Paycheck: $" << paycheck << endl << endl;

    outFile << "Distance Traveled: " << distance << " miles, Traveling Time: " << travelTime << " hours" << endl;
    outFile << "Average Speed: " << averageSpeed << " miles per hour" << endl << endl;

    outFile << "Number of Coffee Cups Sold: " << cupsSold
            << ", Cost: $" << costPerCup << " per cup" << endl;
    outFile << "Sales Amount = $" << salesAmount << endl;

    // Close files
    inFile.close();
    outFile.close();

    return 0;
}
