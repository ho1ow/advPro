#include <iostream>
using namespace std;
int n, k;
char a = 'a';
string s;
bool check[10000];
void print()
{
    for (int i = 1; i <= k; i++)
        cout << s[i];
}
void th(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (check[int(a) + j] == 0)
        {
            s[i] = char((int)a + j);
            check[int(a) + j] = 1;
            if (i == k)
                print();
            else
            {
                th(i + 1);
            }
            check[int(a) + j] = 0;
        }
    }
}
int main()
{
    cin >> n >> k;
    th(1);
}