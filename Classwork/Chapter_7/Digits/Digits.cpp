#include <iostream>
#include <string>
using namespace std;


int main()
{
    int c;
    string Digits;
    for (c = '0'; c <= '9'; c++)
        Digits += c;
    cout << "\nThe string Digits is " << Digits;

    string S;
    int k;
    for (k = 1; k <= 10; k++)
        S.append(Digits);
    cout << "\nThe string S is " << S;

    //Search for 345 in S
    string Search = "345";
    size_t Pos;
    Pos = S.find(Search);
    if(Pos != string::npos)
        cout << "\n" << Search << " is in S at position " << Pos;
    else
        cout << "\n" << Search << " is not in S";

    cout << "\nALL OCCURENCES:\n";
    Pos = -1;
    int Counter = 0;
    bool Found = false;
    do
    {
        Pos = S.find(Search, Pos + 1);
        if (Pos != string::npos)
            {
            cout << "\n" << Search << " is in S at position " << Pos;
            Counter++;
            Found = true;
            }
        cout << "\n";
    } 
    while (Pos != string::npos);
    if (Found == false)
        cout << "\n" << Search << " is not in S";
    if (Counter == 0)
        cout << "\n" << Search << " is not in S";
}