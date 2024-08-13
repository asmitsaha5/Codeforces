#include <bits/stdc++.h>
using namespace std;
bool check(int a)
{
    string numberStr = to_string(a);
    if (numberStr.length() > 2)
    {
        numberStr = numberStr.substr(2);
    }

    int x = stoi(numberStr);
    if (x > 2)
        return true;
    else
        return false;
}
void task()
{
    int a;
    int n;
    cin >> a;

    int flag = 0;
    if (a >= 100 && a <= 999)
    {
        n = a / 10;
    }
    else
    {
        n = a / 100;
    }
    if (n == 10)
        flag++;

    if (check(a))
        flag++;

    if (flag == 2)
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
        task();
    }
}