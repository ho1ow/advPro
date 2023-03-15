#include <iostream>
using namespace std;
int binSearch(int *a, int l, int r, int target)
{
    if (l > r)
        return -1;
    int m = (l + r) / 2;
    if (target == *(a+m))
        return m;
    if (target > *(a+m))
        return binSearch(a, m + 1, r, target);
    if (target < *(a+m))
        return binSearch(a, l, m - 1, target);
    return -1;
}
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    cout << binSearch(a, 0, 9, 10);
}