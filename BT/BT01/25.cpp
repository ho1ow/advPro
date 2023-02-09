#include <iostream>
#include <cmath>
using namespace std;

int _max(int a, int b)
{
    return (a + b + abs(a - b)) / 2;
}

int _max(int a, int b, int c)
{
    return _max(a, _max(b, c));
}

int _min(int a, int b)
{
    return (a + b - abs(a - b)) / 2;
}
int _min(int a, int b, int c)
{
    return _min(a, _min(b, c));
}
int _mid(int a, int b, int c)
{
    return a + b + c - _max(a, b, c) - _min(a, b, c);
}

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int x = _max(a, b, c);
    int y = _min(a, b, c);
    int z = _mid(a, b, c);
    int ans;
    if (d > x)
    {
        if (e > x)
        {
            ans = x;
        }
        else
        {
            ans = _max(y, z, e);
        }
    }
    else
    {
        if (e > x)
        {
            ans = _max(d, y, z);
        }
        else
        {
            if (e < z)
            {
                ans = _mid(d, y, z);
            }
            else
            {
                ans = _mid(d, e, y);
            }
        }
    }

    cout << "mid = " << ans;
}