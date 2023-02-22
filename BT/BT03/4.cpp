#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    char a[x][y];
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            cin >> a[i][j];

    int b[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y - 1; j++)
        {
            if (a[i][j] == '*')
            {
                b[i][j] = '*';
            }
        }
    }
}