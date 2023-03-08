#include <iostream>
using namespace std;

void hoanVi(string s, int m, int n)
{
    string res = "";
    for (int i = 0; i < n; i++)
    {

        res += s[i];
        swap(s[m], s[i]);
        hoanVi(s, m + 1, n);
        if (res.size() == n)
        {
            cout << res << endl;
            res = "";
        }
        swap(s[m], s[i]);
    }
}
int main()
{
    hoanVi("abc",0,3);
}