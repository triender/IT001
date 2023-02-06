#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int is_SoDoiXung(int n)
{
    if (n == 0)
    {
        return 1;
    }
        
    if (n < 0)
    {
        n = abs(n);
    }
    string A;
    A = to_string(n);
    int len = A.length();

    if (A[0] != A[len - 1])
    {
        return 0;
    }
    else
    {
        if (n < 100)
        {
            return n;
        }
        else
        {
            n -= int((A[0]) - 48) * pow(10, len - 1);
            n /= 10;
            return is_SoDoiXung(n);
        }
    }
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
