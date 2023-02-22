#include <iostream>
using namespace std;
bool checkStr(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - 1 - i])
            return false;
    }
    return true;
}
string check(string s[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                string tmp = s[i];
                tmp += s[j];
                if (checkStr(tmp))
                {
                    return s[j];
                }
            }
        }
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    string res = check(s, n);
    int ans = res.size();
    cout << ans << " " << res[ans / 2];
}