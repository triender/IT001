#include <iostream>

using namespace std;

int SoDao(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans = ans * 10 + (n % 10);
        n /= 10;
    }
    return ans;
}

bool is_SoDoiXung(int n)
{
    if (n < 0)
        n = abs(n);
    if (SoDao(n) == n)
        return true;
    return false;
}

int main()
{
    int n;
    std::cin >> n;
    if (is_SoDoiXung(n))
        std::cout << std::boolalpha << true;
    else
        std::cout << std::boolalpha << false;
    return 0;
}
