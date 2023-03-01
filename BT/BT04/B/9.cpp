#include <iostream>
using namespace std;
bool check1(int *a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sumRow = 0;
        int sumCol = 0;
        for (int j = 0; j < n; j++)
        {
            sumRow += a[i][j];
            sumCol += a[j][i];
        }
        if (sumRow * sumCol != 0)
        {
            return false;
        }
    }
    int i = 0, j = 0;

    for (i = 0; i < n; i++)
    {
        int sumR = 0, sumL = 0;
        while (i <= n || j <= n)
        {
            sumR += a[i++][j++];
            sumL += a[j++][i++];
        }
        if (sumL * sumR != 0)
        {
            return false;
        }
    }
    int x = n - 1, y = n - 1;

    for (x = n - 1; x >= 0; x--)
    {
        int sumR2 = 0, sumL2 = 0;
        while (x >= 0 || y >= 0)
        {
            sumR2 += a[x--][y--];
            sumL2 += a[y--][x--];
        }
        if (sumL2 * sumR2 != 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];

        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    string res = check1(a, n) ? "no" : "yes";
    cout << res;
}
