#include <iostream>
using namespace std;
bool check(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return n >= 2;
}
int main()
{
    int n;
    cin >> n;
    string ans = check(n) ? "yes" : "no";
    cout << ans;
}