#include <iostream>
using namespace std;
int main()
{
    int a, b, *n;
    cout << "Enter a value :";
    cin >> a;

    n = &a;
    *n = *n + 10;

    cout << "The new value is :" << a << endl;

    return 0;
}