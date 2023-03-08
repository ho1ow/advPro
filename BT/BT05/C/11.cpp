#include<iostream>
using namespace std;
string decToBin(long long n)
{
    string s="";
    while (n>0)
    {
        if (n%2) s+="1"; else s+="0";
        n/=2;
    }
    return s;
}
int main()
{

}