#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int a, b;
    cin >> a;
    cin >> b;

    if (a % b == 0)
    {
        cout << a / b << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}