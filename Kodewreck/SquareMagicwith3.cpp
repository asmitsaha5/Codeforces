#include <bits/stdc++.h>

using namespace std;

bool check(int n)
{
    while (n % 3 == 0)
    {
        n = n / 3;
    }
    if (n == 1)
        return true;
    else
        return false;
}

void solution()
{
    int n;
    cin >> n;

    int flag = 0;

    int rt = sqrt(n);
    double rt2 = sqrt(n);

    if (rt == rt2)
        flag++;

    if (check(n))
        flag++;

    if (flag == 2)
    {
        cout << "Happy" << endl;
    }
    else
    {
        cout << "Unhappy" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}