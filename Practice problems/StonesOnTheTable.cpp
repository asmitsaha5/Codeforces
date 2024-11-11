#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int rem = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            rem++;
        }
    }
    cout << rem << endl;
}