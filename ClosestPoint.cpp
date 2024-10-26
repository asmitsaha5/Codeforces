#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>

using namespace std;

int distance(int a, int b)
{
    return abs(a - b);
}

void cheat(vector<int> arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        if (distance(arr[i], arr[i + 1]) == 1)
        {
            cout << "Kosuke" << endl;
            return;
        }
    }
    if (len == 2)
        cout << "Sakurako" << endl;
    else
        cout << "Kosuke" << endl;
}

int main()
{
    int n_test;
    cin >> n_test;
    for (int i = 0; i < n_test; i++)
    {
        int len;
        cin >> len;
        cin.ignore();
        string line;
        getline(cin, line);

        vector<int> nums;
        stringstream ss(line);
        int num;
        while (ss >> num)
        {
            nums.push_back(num);
        }

        cheat(nums, len);
    }
    return 0;
}
