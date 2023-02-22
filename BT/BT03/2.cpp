#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string rev = string(s.rbegin(), s.rend());
    if (rev == s)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}