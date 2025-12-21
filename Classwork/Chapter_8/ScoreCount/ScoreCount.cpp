#include <iostream>
using namespace std;

int main() 
{
    const int RANGE_COUNT = 8;
    const int SCORE_COUNT = 26;
    int scores[SCORE_COUNT] = 
    {
        76, 89, 150, 135, 200, 76, 12, 100, 150, 28, 178, 189, 167,
        200, 175, 150, 87, 99, 129, 149, 176, 200, 87, 35, 157, 189
    };

    int rangeLimits[RANGE_COUNT + 1] = {0, 25, 50, 75, 100, 125, 150, 175, 201};
    int rangeCounts[RANGE_COUNT] = {0};

    // Count scores in each range
    for (int i = 0; i < SCORE_COUNT; i++) 
    {
        int score = scores[i];
        for (int j = 0; j < RANGE_COUNT; j++) 
        {
            if (score >= rangeLimits[j] && score < rangeLimits[j + 1]) 
            {
                rangeCounts[j]++;
                break;
            }
        }
    }

    // Output results
    cout << "Score Range\tNumber of Students\n";
    for (int i = 0; i < RANGE_COUNT; i++) {
        cout << rangeLimits[i] << "–" << rangeLimits[i + 1] - 1 << "\t\t" << rangeCounts[i] << endl;
    }

    return 0;
}
