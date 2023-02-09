#include <iostream>
#include <cstdlib>

int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << "max=" << (a + b + abs(a - b)) / 2 << "\n";
    std::cout << "min=" << (a + b - abs(a - b)) / 2 << "\n";
}