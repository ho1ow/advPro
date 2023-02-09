#include <iostream>
int main()
{
    int n;
    do
    {
        std::cin >> n;
        if (n == -1)
        {
            std::cout << "bye";
            break;
        }
        int ans;
        ans = (n % 5 == 0 && n >= 0) ? (n / 5) : -1;
        std::cout << ans;
    } while (n != -1);
}