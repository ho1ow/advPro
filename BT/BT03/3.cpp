#include <iostream>
using namespace std;

bool checkPalNum(int n)
{
    int revNum = 0;
    int tmp = n;
    while (tmp > 0)
    {
        revNum = revNum * 10 + tmp % 10;
        tmp /= 10;
    }
    return revNum == n;
}

int main()
{
    int T;
    cin >> T;
    int a, b;
    while (T > 0)
    {
        int count = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (checkPalNum(i))
                count++;
        }
        if (count > 0)
        {
            cout << count << " ";
        }
        cout << "\n";
        T--;
    }
}
