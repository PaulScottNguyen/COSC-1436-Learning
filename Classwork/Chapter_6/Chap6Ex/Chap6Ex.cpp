// Chapter_6_exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath> 
using namespace std;

//Function to enter a number
int EnterNumber()
{
    cout << "\n";
    //Enter the number
    int Number; cout << "Enter a number: "; cin >> Number;
    //Return the number
    return Number;
}

//Function to enter a number using a reference
void EnterNumberUsingReference(int &Number)
{
    cout << "\n";
    //Enter the number
    cout << "Enter a number: "; cin >> Number;
}

//Function to print "The number MESSAGE is NUMBER"
void PrintNumberWithMessage(string MESSAGE, int NUMBER)
{
    cout << "The number " << MESSAGE << " is " << NUMBER << "\n";
}

//Function that echo a number
int EchoNumber(int Number)
{
    //Print the Number
    cout << Number << "\n";
    //Return the Number
    return Number;
}

//Function that returns the next number after N
int NextNumber(int Number)
{
    return Number + 1;
}

//Function to compute the sum of 2 numbers N1 and N2
//From calling functions
int SumNumbers(int N1, int N2)
{
    //Compute Sum
    int Sum = N1 + N2;
    //Return the Sum
    return Sum;
}

//Function to output "The number is N" replace N with the value of parameter N
void PrintNumber(int N)
{
    cout << "The number is " << N << endl;
}

//Function that prints all the number between 1 and 100
void PrintNumbers()
{

    cout << "\n\n The numbers between 1 and 100 are: \n";
    int k;
    for (k = 1; k <= 100; k++)
        cout << k << " ";
}

//Function that prints all the numbers between 1 and N
void PrintNumbers1ToN(int N)
{
    
    cout << "\n\n The numbers between 1 and " << N << " are: ";
    if (N > 0)
    {
        int k;
        for (k = 1; k <= N; k++)
            cout << k << " ";
    }
    else
    {
        int k;
        for (k = 1; k >= N; k--)
            cout << k << " ";
    }
}

//Function PrintNumbersAtoB that print all the numbers between A and B
void PrintNumbersAtoB(int A, int B)
{
    int k;
    cout << "\n\n The numbers between "<< A <<" and " << B << " are: ";
    if (A <= B)
    {
        for (k = A; k <= B; k++)
            cout << k << " ";
    }
    else
    {
        for (k = A; k >= B; k--)
            cout << k << " ";
    }
}

//Function that computes the minimum of 2 numbers x and y
int MIN(int x, int y)
{
    int Min;
    if (x <= y)
    {
        Min = x;
    }
    else
    {
        Min = y;
    }
    return Min;
}

//Function that computes the maximum of 2 numbers x and y
int MAX(int x, int y)
{
    int Max;
    if (x <= y)
    {
        Max = y;
    }
    else
    {
        Max = x;
    }
    return Max;
}

//Function that computes the minimum of 2 numbers x and y using a reference
void MIN2(int x, int y, int &Min)
{
    if (x <= y)
    {
        Min = x;
    }
    else
    {
        Min = y;
    }
}

//Function that computes the maximum of 2 numbers x and y using a reference
void MAX2(int x, int y, int &Max)
{
    if (x <= y)
    {
        Max = y;
    }
    else
    {
        Max = x;
    }
}

//Function that computes both minimum and maximum
void MinimumMaximum(int x, int y, int& Min, int& Max)
{
    if (x <= y)
    {
        Min = x;
        Max = y;
    }
    else
    {
        Min = y;
        Max = x;
    }

}

//main function
int main()
{
    //Use Defined Functions
    double i1 = pow(2, 3); //Can be assigned to a variable
    double i2 = pow(2, 3) - 7; //Can have constants
    double i3 = pow(i1, i2); //Can take parameters
    cout << pow(i1 + 10, pow(2,1)) << "\n"; //Can be put inside another function, cout
    //Calling the function EnterNumber
    //Calling the function PrintNumberWithMessage 
    int N1 = EnterNumber();
    int N2 = EnterNumber();
    PrintNumberWithMessage("N1", N1);
    PrintNumberWithMessage("N2", N2);
    
    //Calling the function EchoNumber
    int N3 = EnterNumber();
    PrintNumberWithMessage("echo", N3);

    //Calling the function NextNumber
    PrintNumberWithMessage("next", NextNumber(N3));

    //Calling the function SumNumbers
    int N4 = SumNumbers(N1, N2); 
    PrintNumberWithMessage("sum", N4);
    
    //Call PrintNumber function
    PrintNumber(0); //Constant
    PrintNumber(N1); //Variable
    PrintNumber(EnterNumber()); //Function

    //Call PrintNumbers function
    PrintNumbers();

    //Call PrintNumbers1ToN
    PrintNumbers1ToN(9);
    PrintNumbers1ToN(N2);
    PrintNumbers1ToN(EnterNumber());

    //Call PrintNumbersAtoB
    int A = EnterNumber(); int B = EnterNumber();
    PrintNumbersAtoB(A, B);
    cout << "\n\n";

    //Call MIN with return value
    int Min = MIN(EnterNumber(), EnterNumber());
    PrintNumberWithMessage("Min1", Min);

    //Call MAX with return value
    int Max = MAX(EnterNumber(), EnterNumber());
    PrintNumberWithMessage("Max1", Max);

    //Call MIN2
    int Min2;
    MIN2(EnterNumber(), EnterNumber(), Min2);
    PrintNumberWithMessage("Min2", Min2);

    //Call MAX2
    int Max2;
    MAX2(EnterNumber(), EnterNumber(), Max2);
    PrintNumberWithMessage("Max2", Max2);

    //Call MinimumMaximum
    MinimumMaximum(3, 9, Min, Max);
    PrintNumberWithMessage("Min3", Min);
    PrintNumberWithMessage("Max3", Max);

    //Call EnterNumberUsingReference
    int N;
    EnterNumberUsingReference(N);
    PrintNumberWithMessage("RefN", N);
}