#include <iostream>
#include <string>
#include <vector>
using namespace std;

string abbreviate(const string &word)
{
    if (word.length() > 10)
    {
        int num_chars_in_between = word.length() - 2;
        return word[0] + to_string(num_chars_in_between) + word.back();
    }
    return word;
}

int main()
{
    int n;
    cin >> n;

    vector<string> words(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> words[i];
    }

    for (const string &word : words)
    {
        cout << abbreviate(word) << endl;
    }

    return 0;
}
