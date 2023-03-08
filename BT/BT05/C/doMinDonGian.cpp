#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void mine(int **arr, int m, int n, int k)
{

    int a[m * n] = {0};
    int mines = 0;
    while (mines < k)
    {
        int y = rand() % (m * n);
        if (a[y] == 0)
        {
            a[y] = 1;
            mines++;
        }
    }

    int x = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = a[x++];
        }
    }
}

void print(int **arr, int m, int n, int k)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

string play(int **arr)
{
    bool flag = 1;
    int x, y;
    while (flag == 1)
    {
        cin >> x >> y;
        x--;
        y--;
        if (arr[x][y] == 1)
        {
            cout << "YOU'RE DEAD!" << endl;
            flag = 0;
        }
        else
        {
            cout << "not mine \ncontinue" << endl;
        }
    }
    return "end";
}

int main()
{
    srand(time(NULL));

    int m, n, k;
    cin >> m >> n >> k;
    int **arr;
    arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }
    mine(arr, m, n, k);
    print(arr, m, n, k);
    play(arr);
    cout << "end";
}