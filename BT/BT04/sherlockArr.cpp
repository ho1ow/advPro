#include <iostream>
using namespace std;
int preSum(int a[], int n, int x)
{
    int ps[n + 1];
    ps[0] = 0;
    for (int i = 0; i < n; i++)
    {
        ps[i + 1] = ps[i] + a[i];
    }
    return ps[x];
}
bool check(int a[], int n)
{
    int left[n], right[n];
    for (int i = 0; i < n; i++)
    {
        left[i] = preSum(a, n, i - 1);
        right[i] = preSum(a, n, n) - preSum(a, n, i);
        if (left[i] == right[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string ans = check(a, n) ? "YES" : "NO";
        cout << ans << endl;
    }
}