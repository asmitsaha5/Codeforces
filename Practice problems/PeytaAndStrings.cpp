#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string toLowerCase(const string &str)
{
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main()
{
    string str1, str2;

    cin >> str1 >> str2;

    string lowerStr1 = toLowerCase(str1);
    string lowerStr2 = toLowerCase(str2);

    if (lowerStr1 < lowerStr2)
    {
        cout << "-1" << endl;
    }
    else if (lowerStr1 > lowerStr2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
