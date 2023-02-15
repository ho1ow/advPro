#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a, b;
    int minX = 1000000;
    int minY = 1000000;

    for (int i = 0; i < n; i++)
    {

        cin >> a >> b;
        if (a <= minX)
        {
            minX = a;
        }
        if (b <= minY)
        {
            minY = b;
        }
    }

    cout << (int_fast64_t)minX * minY;
}
