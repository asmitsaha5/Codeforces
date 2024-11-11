#include <iostream>
#include <vector>
#include <numeric> // Include for std::gcd
using namespace std;

// Custom GCD function
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int l, r;
        cin >> l >> r; // Input range [l, r]

        vector<bool> available(r - l + 1, true); // Mark all numbers as available
        int count = 0;                           // To keep track of operations

        // Check all possible triplets in the range [l, r]
        for (int i = l; i <= r; ++i)
        {
            for (int j = i + 1; j <= r; ++j)
            {
                for (int k = j + 1; k <= r; ++k)
                {
                    if (available[i - l] && available[j - l] && available[k - l])
                    {
                        // Use custom gcd function
                        if (gcd(i, j) == 1 && gcd(j, k) == 1 && gcd(i, k) == 1)
                        {
                            // We found a valid triplet
                            available[i - l] = false;
                            available[j - l] = false;
                            available[k - l] = false;
                            count++;
                        }
                    }
                }
            }
        }

        cout << count << endl; // Output the maximum number of operations for this case
    }

    return 0;
}