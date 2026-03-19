#include <iostream>
#include <functional>
using namespace std;

int SigmaSummation(function<double(int)> term, int a, int b)
{
    double total = 0;
    for (int i=a; i<=b; i++)
    {
        total = total + term(i);
    }
    return total;
}
int main()
{
    int a, b;
    cout << "Enter start a = "; cin >> a;
    cout << "\nEnter end b = "; cin >> b;

    auto term = [](int x){
        return 3*x+1; //edit expression here
    };

    cout << SigmaSummation(term, a, b) << "\n";
}