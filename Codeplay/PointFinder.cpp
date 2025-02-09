#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;

    if ((a + b) % 2 == 0)
    {
        cout << (a + b) / 2 << endl;
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
        solve();
    }
    return 0;
}