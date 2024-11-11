#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int current_position = 0;
    int i = 1;
    bool isSakurakoTurn = true;

    while (true)
    {
        int move_distance = 2 * i - 1;

        if (isSakurakoTurn)
        {
            current_position -= move_distance;
        }
        else
        {
            current_position += move_distance;
        }

        if (abs(current_position) > n)
        {
            if (isSakurakoTurn)
            {
                cout << "Sakurako" << endl;
            }
            else
            {
                cout << "Kosuke" << endl;
            }
            break;
        }

        isSakurakoTurn = !isSakurakoTurn;
        i++;
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
    return 0;
}
