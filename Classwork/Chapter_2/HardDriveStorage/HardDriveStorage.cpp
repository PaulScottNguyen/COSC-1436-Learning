#include <iostream>
using namespace std;
int main()
{
    cout << "Hard Drive Storage Calculator\n";
    cout << "-----------------------------\n";
    //Allocate constants
    const int TB_to_GB = 1024;
    const int GB_to_MB = 1024;
    const int MB_to_KB = 1024;
    const int KB_to_Bytes = 1024;
    //Allocate variables
    float hardDriveTB;
    long long int totalBytes;
    //Prompt for user input
    cout << "Enter the hard drive capacity (in TB): "; cin >> hardDriveTB;
    //Calculate total bytes
    totalBytes = hardDriveTB * TB_to_GB * GB_to_MB * MB_to_KB * KB_to_Bytes;
    //Output result
    cout << "The total storage capacity in bytes is: " << totalBytes << " bytes" << endl;
}