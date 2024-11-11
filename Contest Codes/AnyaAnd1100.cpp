#include <bits/stdc++.h>

using namespace std;

bool is1100(const string &s, int idx)
{
    if (idx + 3 >= s.size())
        return false;
    return s[idx] == '1' && s[idx + 1] == '1' && s[idx + 2] == '0' && s[idx + 3] == '0';
}

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int q;
        cin >> s >> q;

        int n = s.size();
        int count1100 = 0;
        for (int i = 0; i <= n - 4; ++i)
        {
            if (is1100(s, i))
            {
                ++count1100;
            }
        }

        while (q--)
        {
            int i, v;
            cin >> i >> v;
            --i;
            for (int j = max(0, i - 3); j <= min(n - 4, i); ++j)
            {
                if (is1100(s, j))
                {
                    --count1100;
                }
            }
            s[i] = '0' + v;

            for (int j = max(0, i - 3); j <= min(n - 4, i); ++j)
            {
                if (is1100(s, j))
                {
                    ++count1100;
                }
            }

            cout << (count1100 > 0 ? "YES" : "NO") << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
