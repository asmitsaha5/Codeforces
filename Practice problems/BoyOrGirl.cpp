#include <bits/stdc++.h>
using namespace std;

int main()
{
    string username;
    cin >> username;

    set<char> dc;

    for (char c : username)
    {
        dc.insert(c);
    }

    if (dc.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}