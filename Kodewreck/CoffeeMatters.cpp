#include <bits/stdc++.h>
using namespace std;

void packing(int n)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << count << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;
        packing(n);
    }

    return 0;
}
