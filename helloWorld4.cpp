#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans;

    string _1digit[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string _1_[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string _2digit[100] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string _3 = "hundred";
    string _4 = "thousand";
    string _5 = "milion";

    int n = s.length();
    if (s[0] == '-')
    {
        ans += "negative";
        
    }
    
    for(int i=1;i<n;i++)
    {
        s[i]-='0';
    }
    


    
}