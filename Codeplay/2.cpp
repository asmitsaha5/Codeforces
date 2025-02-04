#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, a[200005];

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (n == k)
    {
        int flg = 0;
        for (int i = 2; i <= n; i += 2)
            if (a[i] == i / 2)
                flg = i / 2;
            else
                break;
        cout << ++flg << endl;
    }
    else
    {
        bool flg = true;
        for (int i = 2; i <= n - k + 2; i++)
            flg &= a[i] == 1;
        cout << (flg ? 2 : 1) << endl;
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