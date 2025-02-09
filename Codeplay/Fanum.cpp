#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canSort(vector<int>& a, int b) {
    int n = a.size();
    int prev = 0;
    
    for (int i = 0; i < n; i++) {
        int curr = max(a[i], b - a[i]);
        if (curr < prev) {
            return false;
        }
        prev = curr;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int b;
        cin >> b;
        
        if (canSort(a, b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
