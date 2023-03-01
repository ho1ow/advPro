#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a+1, a + n+1);
    int i = 1, j = n;
    while (i < j)
    {
        if (a[i] + a[j] == 0)
        {
            cout << a[i] << " " << a[j] << endl;
        }
        if (a[i] + a[j] < 0)
            i += 1;
        else
            j -= 1;
    }
}