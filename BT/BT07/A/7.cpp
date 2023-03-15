#include <iostream>
using namespace std;
int count(string s, string s1)
{
    string tmp = "";
    int res = 0;
    int n1 = s1.size();
    int n = s.size();
    if (n < n1)
        return 0;
    for (int i = 0; i < n1; i++)
    {
        tmp += s[i];
    }
    for (int i = n1; i <= n; i++)
    {
        if (tmp == s1)
        {
            res++;
        }
        tmp.erase(0, 1);
        tmp += s[i];
    }
    return res;
}
int main()
{
    string s, s1;
    cin >> s >> s1;
    cout << count(s, s1);
}