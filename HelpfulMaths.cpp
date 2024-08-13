#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> numbers;

    for (char c : s)
    {
        if (c != '+')
        {
            numbers.push_back(c - '0');
        }
    }

    sort(numbers.begin(), numbers.end());

    for (size_t i = 0; i < numbers.size(); ++i)
    {
        cout << numbers[i];
        if (i < numbers.size() - 1)
        {
            cout << '+';
        }
    }

    return 0;
}
