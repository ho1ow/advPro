#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << "Nhap vao mot so trong khoang 0..9:";
        cin >> n;
        string x = "Vua nhap chu so ";
        switch (n)
        {
        case 0:
            cout << x << "khong";
            break;
        case 1:
            cout << x << "mot";
            break;
        case 2:
            cout << x << "hai";
            break;
        case 3:
            cout << x << "ba";
            break;
        case 4:
            cout << x << "bon";
            break;
        case 5:
            cout << x << "nam";
            break;
        case 6:
            cout << x << "sau";
            break;
        case 7:
            cout << x << "bay";
            break;
        case 8:
            cout << x << "tam";
            break;
        case 9:
            cout << x << "chin";
            break;

        default:
            cout << "khong hop le";
            break;
        }
        cout << "\n";

    } while (n > 9);
}