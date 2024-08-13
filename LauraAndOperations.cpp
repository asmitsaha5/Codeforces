#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
    
        int Ones = (b + c <= a) ? 1 : 0;
        int Twos = (a + c <= b) ? 1 : 0;
        int Threes = (a + b <= c) ? 1 : 0;
        
        cout << Ones << " " << Twos << " " << Threes << endl;
    }
    
    return 0;
}
