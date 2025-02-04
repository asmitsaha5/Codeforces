#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    set<int> sums;
    for (int i = 0; i < n; ++i)
    {
        sums.insert(a[i] + b[i]);
    }

    if (sums.size() >= 3)
        return true;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j)
            {
                set<int> temp_sums;
                for (int k = 0; k < n; ++k)
                {
                    if (k == i)
                        temp_sums.insert(a[j] + b[k]);
                    else if (k == j)
                        temp_sums.insert(a[i] + b[k]);
                    else
                        temp_sums.insert(a[k] + b[k]);
                }
                if (temp_sums.size() >= 3)
                    return true;
            }
        }
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        if (solve())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}