#include <iostream>
using namespace std;
int main()
{
    //Allocate variables
    float score1, score2, score3, score4, score5, average;
    //Prompt for user input
    cout << "Enter five test scores: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    //Calculate average
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    //Output result
    cout << "The average test score is: " << average << endl;
}