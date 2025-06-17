#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int sum = 0;
    bool found = false;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        if (a[i] == x)
        {
            found = true;
        }
    }

    if (sum % n != 0 || !found)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
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