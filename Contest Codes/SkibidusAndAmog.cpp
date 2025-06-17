#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    vector<string> results;
    string W;
    cin >> W;
    W.erase(W.size() - 2);
    W += "i";
    results.push_back(W);
    for (const string &res : results)
    {
        cout << res << "\n";
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
