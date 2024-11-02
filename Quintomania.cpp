#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    vector<int> notes(n);
    for (int i = 0; i < n; i++)
    {
        cin >> notes[i];
    }

    bool isPerfect = true;
    for (int i = 1; i < n; i++)
    {
        int interval = abs(notes[i] - notes[i - 1]);
        if (interval != 5 && interval != 7)
        {
            isPerfect = false;
            break;
        }
    }

    if (isPerfect)
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
