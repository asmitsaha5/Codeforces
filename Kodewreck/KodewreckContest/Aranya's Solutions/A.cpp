#include <bits/stdc++.h>

using namespace std;

void solution()
{
    int a, b;
    cin >> a >> b;
    int d = abs((a - b));

    if (d % 2 == 0)
    {
        a = min(a, b);
        cout << a + (d / 2) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        solution();
    }
}