#include <iostream>
#include <cmath>
using namespace std;
int rnd1(double n)
{
    if (int(10 * n) % 10 >= 5)
        return ceil(n);
    return floor(n);
}
int rnd2(double n)
{
    int a = (int)n;
    n -= a;
    if (n >= 0.5)
        return a + 1;
    else
        return a;
}
int main()
{
    double n;
    cin >> n;
    cout << rnd1(n) << " " << rnd2(n);
}