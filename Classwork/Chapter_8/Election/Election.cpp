#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
    const int NUM_CANDIDATES = 5;
    string candidates[NUM_CANDIDATES];
    int votes[NUM_CANDIDATES];
    int totalVotes = 0;

    // Input candidate names and votes
    for (int i = 0; i < NUM_CANDIDATES; i++) 
    {
        cout << "Enter last name of candidate #" << (i + 1) << ": ";
        cin >> candidates[i];
        cout << "Enter number of votes received by " << candidates[i] << ": ";
        cin >> votes[i];
        totalVotes += votes[i];
    }

    // Output header
    cout << "\nCandidate     Votes Received     % of Total Votes\n";
    cout << fixed << setprecision(2);

    // Output each candidate's data
    int winnerIndex = 0;
    for (int i = 0; i < NUM_CANDIDATES; ++i) 
    {
        double percent = (static_cast<double>(votes[i]) / totalVotes) * 100;
        cout << left << setw(15) << candidates[i]
             << right << setw(10) << votes[i]
             << setw(20) << percent << endl;

        if (votes[i] > votes[winnerIndex]) 
        {
            winnerIndex = i;
        }
    }

    // Output total and winner
    cout << left << setw(15) << "Total"
         << right << setw(10) << totalVotes << endl;
    cout << "\nThe Winner of the Election is " << candidates[winnerIndex] << ".\n";

    return 0;
}
