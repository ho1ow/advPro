#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int count = 1;
    int a[x][y];
    int h1 = 0, h2 = x - 1, c1 = 0, c2 = y - 1;
    while (h1 <= h2 && c1 <= c2)
    {
        for (int i = c1; i <= c2; i++)
        {
            a[h1][i] = count++;
        }
        h1++;
        for (int i = h1; i <= h2; i++)
        {
            a[i][c2] = count++;
        }
        c2--;
        // if (c1 <= c2)
        {
            for (int i = c2; i >= c1; i--)
            {
                a[h2][i] = count++;
            }
            h2--;
        }
        // if (h1 <= h2)
        {
            for (int i = h2; i >= h1; i--)
            {
                a[i][c1] = count++;
            }
            c1++;
        }
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
}