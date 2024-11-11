#include <iostream>
#include <set>
using namespace std;

int main()
{
    string username;
    cin >> username;

    set<char> distinct_characters;

    for (char c : username)
    {
        distinct_characters.insert(c);
    }

    if (distinct_characters.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
