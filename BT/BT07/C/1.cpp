#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int roll()
{
    return rand() % 6 + 1;
}

void point(int *_point, const int &dice)
{
    *_point += dice;
}

int main()
{
    srand(time(0));

    int _continue = 1;
    do
    {
        int *pp1 = new int(0);
        int *pp2 = new int(0);
        int turn = rand() % 2;
        while (*pp1 < 100 && *pp2 < 100)
        {
            if (turn == 1)
            {
                point(pp1, roll());
                cout << "p1 point : " << *pp1 << endl;
                turn = 2;
            }
            else
            {
                point(pp2, roll());
                cout << "p2 point : " << *pp2 << endl;
                turn = 1;
            }
        }
        if (*pp1 > *pp2)
        {
            cout << "p1 win" << endl;
        }
        else
        {
            cout << "p2 win" << endl;
        }

        delete pp1;
        pp1 = NULL;
        delete pp2;
        pp2 = NULL;

        cout << "continue ? ";
        cin >> _continue;
    } while (_continue == 1);
}
