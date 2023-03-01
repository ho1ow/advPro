#include <iostream>
using namespace std;
void matrix()
{
    int n;
    cout << "Nhap so nguyen duong le N: ";
    cin >> n;

    int matrix[n][n] = {};
    int row = 0;
    int col = n / 2;
    int num = 1;
    matrix[row][col] = num;

    for (int i = 2; i <= n * n; i++)
    {
        int new_row = (row - 1 + n) % n;
        int new_col = (col + 1) % n;
        if (matrix[new_row][new_col] == 0)
        {
            row = new_row;
            col = new_col;
        }
        else
        {
            row = (row + 1) % n;
        }

        num++;
        matrix[row][col] = num;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
}