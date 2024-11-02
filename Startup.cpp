#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second > b.second;
}

void solution()
{
    int n, k;
    cin >> n >> k;

    vector<int> b(k, 0);
    vector<int> c(k, 0);

    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
        cin >> c[i];
    }

    // cout << "Reached";
    map<int, int> m;

    for (int i = 0; i < k; i++)
    {
        m[b[i]] += c[i];
    }

    vector<pair<int, int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), cmp);

    int sum = 0;
    // cout << "brand cost" << endl;
    // Print the sorted pairs
    for (auto &i : vec)
    {
        if (n > 0)
        {
            sum += i.second;
            n--;
        }
    }
    cout << sum << endl;
}

int main()
{
    // cout << " Output: ";
    int t = 0;
    cin >> t;

    while (t--)
    {
        solution();
    }
}