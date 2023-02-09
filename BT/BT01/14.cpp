#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    int_fast64_t num;
    cin >> num;
    double winrate = 0;
    srand(time(NULL));
    for (int i = 0; i < num; i++)
    {
        int the1 = rand() % 101;
        int the2 = rand() % 101;
        int value;
        int x;
        //cout << "choose 1,2 ";
        x = rand() % 2 + 1;
        value = (x == 1) ? the1 : the2;
        //cout << "\nthe" << x << "=" << value;
        if (value >= 50)
        {
            // cout << "\nchon the " << x;
        }
        else
        {
            int a = (x == 1) ? 2 : 1;
            // cout << "\nchon the " << a;
        }

        int win = (the1 > the2) ? the1 : the2;
        if (value == win)
        {
            // cout << "\nthang\n";
            winrate++;
        }
        else
        {
            // cout << "\nthua\n";
        }
    }
    winrate = winrate / num;
    
    winrate *= 100;

    cout << fixed << setprecision(2) << winrate;
}