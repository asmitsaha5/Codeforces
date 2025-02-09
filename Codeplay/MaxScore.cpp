#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arrays(n, vector<int>(m));
        vector<long long> sums(n);

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> arrays[i][j];
            }
            sums[i] = accumulate(arrays[i].begin(), arrays[i].end(), 0LL);
        }

        vector<int> indices(n);
        iota(indices.begin(), indices.end(), 0);
        sort(indices.begin(), indices.end(), [&](int i1, int i2)
             { return sums[i1] > sums[i2]; });

        vector<int> concatenated_array;
        for (int i : indices)
        {
            concatenated_array.insert(concatenated_array.end(), arrays[i].begin(), arrays[i].end());
        }

        long long total_score = 0;
        long long current_sum = 0;
        for (int x : concatenated_array)
        {
            current_sum += x;
            total_score += current_sum;
        }

        cout << total_score << endl;
    }
    return 0;
}