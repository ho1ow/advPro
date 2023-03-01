#include <iostream>
using namespace std;
struct diem
{
    float toan, ly, anh;

    float dtb = (this->toan + this->ly + this->anh) / 3;

    void sapXep(diem sv[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (sv[i].dtb < sv[j].dtb)
                {
                    swap(sv[i], sv[j]);
                }
                if (sv[i].dtb = sv[j].dtb)
                {
                    if (sv[i].toan < sv[j].toan)
                    {
                        swap(sv[i], sv[j]);
                    }
                }
            }
        }
    }
    void nhap()
    {
        cin >> toan >> ly >> anh;
    }
};

int main()
{
    
}