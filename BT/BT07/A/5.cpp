#include <iostream>
using namespace std;
int *danglingRef()
{
    int a[12] = {0};
    return a;
}
int main()
{
}