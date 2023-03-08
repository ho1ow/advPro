#include <iostream>
using namespace std;

int *a;

bool check(int i, int n)
{
    if (n == 0)
        return true;
    else
    {
        if (i <= a[n - 1])
            return true;
    }
    return false;
}

void print(int n)
{
    for (int i = 0; i <= n; i++)
        cout << a[i] << "  ";
    cout << endl;
}

void tong(int N, int n = 0)
{
    int tmp = 0;
    for (int i = N; i >= 1; i--)
    {
        if (check(i, n))
        {
            a[n] = i;
            tmp += i;
            if (tmp == N)
                print(n);
            else if (tmp < N)
                tong(n + 1);
            tmp -= i;
        }
    }
}
int main()
{
}
