#include <iostream>
using namespace std;
int main()
{
    int rAlex;
    int rBob;
    int tax;

    cin >> rAlex;
    cin >> rBob;
    cin >> tax;

    int nRevenue;

    nRevenue = (rAlex + rBob) - tax;

    cout << nRevenue;
}