#include <bits/stdc++.h>
using namespace std;

int minLength(string s) {
    string result;
    for (char c : s) {
        if (!result.empty() && result.back() == c) {
            result.pop_back();
        } else {
            result.push_back(c);
        }
    }
    return max(1, (int)result.length());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << minLength(s) << endl;
    }
    return 0;
}
