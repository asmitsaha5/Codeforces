#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int r1 = min(a, m);
    int r2 = min(b, m);
    int rr1 = m - r1;
    int rr2 = m - r2;
    int np = min(c, rr1 + rr2);

    int total = r1 + r2 + np;

    cout << total << endl;
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