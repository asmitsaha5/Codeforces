#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> scores[i];
    }

    int kth_place_score = scores[k - 1];
    int advancing_participants = 0;

    for (int i = 0; i < n; ++i)
    {

        if (scores[i] >= kth_place_score && scores[i] > 0)
        {
            advancing_participants++;
        }
    }

    cout << advancing_participants << endl;
    return 0;
}
