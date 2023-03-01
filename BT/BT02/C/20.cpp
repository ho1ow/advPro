#include <iostream>
using namespace std;
int tienLamThem(int h)
{
    int s = 100 * 12000;
    h -= 100;
    if (h <= 50)
    {
        s += h * 16000;
    }
    else if (h > 50 && h <= 100)
    {
        s += 50 * 16000 + (h - 50) * 20000;
    }
    else
    {
        s += 50 * 16000 + 50 * 20000 + (h - 100) * 25000;
    }
    return s;
}
int thuNhapSauThue(int s)
{
    int baoHiem = s * 9 / 100;
    int tnChiuThue = s - baoHiem;
    int thue = 0;
    switch (s)
    {
    case 0 ... 1000000:
        thue += 0;
        break;
    case 1000001 ... 1500000:
        thue += (tnChiuThue - 1000000) * 10 / 100;
        break;
    case 1500001 ... 2000000:
        thue += 500000 * 10 / 100 + (tnChiuThue - 1500000) * 15 / 100;
        break;
    default:
        thue += 500000 * 10 / 100 + (500000) * 15 / 100 + (tnChiuThue - 2000000) * 20 / 100;
        break;
    }
    return s - baoHiem - thue;
}
int noNganHang(int vayNH, float laiSuat, int soThang)
{
    soThang--;
    if (soThang == 0)
    {
        return vayNH;
    }
    
    return noNganHang((vayNH + vayNH * laiSuat), laiSuat, soThang);
}

int main()
{
}