#include <iostream>
using namespace std;

int main()
{
float GradePoint;
char LetterGrade;
cout << "Enter your Letter Grade: "; cin >> LetterGrade;
switch (LetterGrade)
{
case 'A':
    GradePoint = 4.0;
        break;
case 'B':
    GradePoint = 3.0;
        break;
case 'C':
    GradePoint = 2.0;
        break;
case 'D':
    GradePoint = 1.0;
        break;
case 'F':
    GradePoint = 0.0;
    break;
default:
    GradePoint = 0.0;
    cout << "The lettergrade is invalid" << "\n\n";
}
cout << "The grade point (using switch) is " << GradePoint << "\n\n";
}