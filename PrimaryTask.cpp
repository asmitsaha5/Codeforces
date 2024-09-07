#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int a = 0;
    cin >> a;
    int z = a;
    int c = -1;
    while (z >= 1)
    {
        z = z / 10;
        c++;
    }

    int m = 1;
    for (int i = 0; i < c - 1; i++)
    {
        m = m * 10;
    }

    int x = a / m;
    int y = a % m;

    if ((x == 10) && (y >= pow(10, (c - 2))) && y >= 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
