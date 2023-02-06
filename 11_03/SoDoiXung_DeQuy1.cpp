#include <iostream>
#include <cmath>

using namespace std;

int SoDao(int &n, int &ans, int &i)
{
    if (n <= 0)
        return n;
    ans = ans * 10 + (n % 10);
    n /= 10;
    i++;
    return SoDao(n, ans, i);
}

bool is_SoDoiXung(int n)
{
    if (n < 0)
        n = abs(n);
    int i = 0, ans = 0;
    int a = n;
    SoDao(a, ans, i);
    if (ans == n)
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
