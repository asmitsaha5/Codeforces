#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        bool isGood = false;

        for (int i = 1; i < n; i++)
        {
            string t1 = s.substr(0, i);
            string t2 = s.substr(i, n - i);

            if (t1[0] != t2[t2.length() - 1])
            {
                isGood = true;
                break;
            }
        }

        if (isGood)
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
