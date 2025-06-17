#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    string w;
    cin >> w;

    int l = w.length();
    int flag = 0;
    int ans = 0;

    for (int i = l - 1; i >= 1; i--)
    {
        if (w[i] == w[i - 1])
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << l << endl;
}

int main()
{
    fastio;

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}