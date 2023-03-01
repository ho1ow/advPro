#include <iostream>
#include <iomanip>
using namespace std;
struct subject
{
    double diem;
    double heSo;
    void input(int i)
    {
        
        cout << "Diem mon hoc " << i << " ";
        cin >> diem;
        cout << "He so mon hoc " << i << " ";
        cin >> heSo;
    }
};

int main()
{
    int n;
    cout << "Tong so mon hoc can tinh DTB: ";
    cin >> n;
    subject a[n+1];
    int tongHeSo = 0;
    int tongDiem = 0;

    for (int i = 1; i <= n; i++)
    {

        a[i].input(i);
        tongHeSo += a[i].heSo;
    }
    cout << fixed << setprecision(2);
    cout << "tong he so = " << tongHeSo << endl;
    double dtb = 0;
    for (int i = 1; i <= n; i++)
    {
        dtb += a[i].diem * a[i].heSo;
    }
    cout << dtb << endl;
    dtb /= tongHeSo;
    cout << dtb << endl;
}