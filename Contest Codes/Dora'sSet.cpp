#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l, r;
    cin >> l >> r;

    int od = 0;
    for (int i = l; i <= r; i++)
    {
        if (i % 2 != 0)
        {
            od++;
        }
    }

    cout << od / 2 << endl;
}

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}