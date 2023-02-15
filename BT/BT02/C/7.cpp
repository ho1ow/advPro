#include <iostream>
using namespace std;
int main()
{
    int n = 1;
    int i = 0;
    int num[100000] = {0};
    int value[100000];
    while (n >= 0)
    {
        cin >> n;
        value[i++] = n;
        num[n]++;
    }

    i -= 1;
    for (int j = 0; j < i; j++)
    {
        if (num[value[j]] >= 1)
        {
            num[value[j]] = 0;

            cout << value[j] << " ";
        }
    }
}