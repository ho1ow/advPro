#include <iostream>
using namespace std;
void print(int m, int n)
{
    for (int i = 0; i < m; i++)
        cout << " ";
    for (int i = 0; i < n; i++)
        cout << "*";
}
void printTriangle(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        print(i, (2 * (n - 1 - i) + 1));
        cout << endl;
    }

}
int main()
{
    int n;
    cin >> n;
    printTriangle(n);
}