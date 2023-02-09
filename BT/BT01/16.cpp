#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    string x= (a==b && b==c)? "true":"false";
    cout<<x;
}