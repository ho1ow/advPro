#include <iostream>
using namespace std;
void error1()
{
    // truy cap con tro chua khoi tao
    int *pX;
    cout << pX << endl;
    cout << *pX << endl;
    *pX = 0;
    cout << pX;
}
void errro2()
{
    // truy cap con tro null
    int *p = NULL;
}

// dangling reference:
int *weird_sum(int a, int b)
{

    int c;

    c = a + b;

    return &c;
}

int main()
{
        
}