#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int matrix[5][5];
    int r, c;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                r = i + 1;
                c = j + 1;
            }
        }
    }

    int moves = abs(r - 3) + abs(c - 3);

    cout << moves << endl;

    return 0;
}
