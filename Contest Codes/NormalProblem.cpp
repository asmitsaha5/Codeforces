#include <bits/stdc++.h>
using namespace std;

char transform(char c)
{
    if (c == 'p')
        return 'q';
    if (c == 'q')
        return 'p';
    return 'w';
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a;
        cin >> a;

        string b = a;
        reverse(b.begin(), b.end());
        for (char &c : b)
        {
            c = transform(c);
        }

        cout << b << endl;
    }

    return 0;
}
