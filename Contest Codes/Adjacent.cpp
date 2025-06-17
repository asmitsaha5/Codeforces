#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;
    if (y == x + 1)
    {
        cout << "YES" << "\n";
    }
    else
    {
        int diff = x + 1 - y;
        if (diff > 0 && diff % 9 == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
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

