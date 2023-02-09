#include<iostream>
using namespace std;
bool leapYear(int n)
{
    return (n % 400 == 0) || (n % 4 == 0 && n % 100 != 0);
}
int main()
{
    
}