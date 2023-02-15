#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = (1 + i); j <= (n + i); j++)
        {
            int h = j;
            if (h > n)
            {
                h -= n;
            }
            if (h >= 10)
            {
                cout << " " << h;
            }
            else
                cout << "  " << h;
        }
        cout << "\n";
    }
}