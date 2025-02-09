#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a;
    cin >> b;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        x = a[i] - '0';
        y = b[i] - '0';

        sum += min(abs(x - y), 10 - abs(x - y));
    }
    cout << sum << endl;
}

int main()
{
    int t=1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}