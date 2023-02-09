#include <iostream>

bool check(int a, int b)
{
    return (a % 7 == 0 && b % 7 == 0);
}


std::string dayOfWeek(int d, int m, int y)
{
    
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << check(a, b);
}