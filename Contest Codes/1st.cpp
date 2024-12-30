#include <bits/stdc++.h>
using namespace std;
bool isStable(const vector<int> &segment)
{
    if (segment.size() < 3)
        return true;
    vector<int> sortedSegment = segment;
    sort(sortedSegment.begin(), sortedSegment.end());
    for (size_t i = 2; i < sortedSegment.size(); ++i)
    {
        if (sortedSegment[i - 2] + sortedSegment[i - 1] <= sortedSegment[i])
        {
            return false;
        }
    }
    return true;
}

bool TwoPartitions(const vector<int> &a)
{
    int n = a.size();

    if (!isStable(a))
        return false;

    for (int i = 1; i < n; ++i)
    {
        vector<int> left(a.begin(), a.begin() + i);
        vector<int> right(a.begin() + i, a.end());
        if (isStable(left) && isStable(right))
        {
            return true;
        }
    }

    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    if (TwoPartitions(a))
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
}