#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int totalOperations = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (a[i][j] < 0)
            {
                int delta = -a[i][j];
                totalOperations += delta;

                for (int k = 0; k <= min(i, j); k++)
                {
                    a[i - k][j - k] += delta;
                }
            }
        }
    }

    cout << totalOperations << endl;
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
