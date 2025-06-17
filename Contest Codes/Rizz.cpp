#include <iostream>
#include <string>
#include <vector>

using namespace std;

string constructBinaryString(int n, int m, int k) {
    if (k > max(n, m) || (n == 0 && m == 0)) {
        return "-1";
    }

    string result;
    int remaining_zeros = n;
    int remaining_ones = m;

    // Start with k zeros
    for (int i = 0; i < k; i++) {
        result += '0';
        remaining_zeros--;
    }

    // Add k ones
    for (int i = 0; i < k; i++) {
        result += '1';
        remaining_ones--;
    }

    // Alternate remaining zeros and ones
    while (remaining_zeros > 0 || remaining_ones > 0) {
        if (remaining_zeros > 0) {
            result += '0';
            remaining_zeros--;
        }
        if (remaining_ones > 0) {
            result += '1';
            remaining_ones--;
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        cout << constructBinaryString(n, m, k) << endl;
    }

    return 0;
}
