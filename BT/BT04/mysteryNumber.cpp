#include <iostream>
using namespace std;
int sum(int a[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
        res += a[i];
    return res;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n + 1; i++)
        cin >> b[i];
    cout << sum(b, n + 1) - sum(a, n);
}