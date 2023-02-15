#include <iostream>
#include <string>

using namespace std;
int maxDay[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
bool leapYear(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

int main()
{
    string date;
    cin >> date;
    int d, m, y;
    d = (date[0] - 48) * 10 + (date[1] - 48);
    m = (date[3] - 48) * 10 + (date[4] - 48);
    y = (date[6] - 48) * 1000 + (date[7] - 48) * 100 + (date[8] - 48) * 10 + (date[9] - 48);

    if (leapYear(y))
    {
        maxDay[2]++;
    }
    int n = 1;
    while (n != 0)
    {
        cin >> n;
        d += n;
        if (d > maxDay[m])
        {
            d -= maxDay[m];
            m++;
        }

        cout << d << "-" << m << "-" << y;
    }
}