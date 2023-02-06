#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    double bankinh;
    std::cin >> bankinh;

    long long int counter = 10;
    int n1 = 14, n2 = 14;
    long double Chu_vi, The_tich;

    Chu_vi = 4*M_PI*pow(bankinh, 2);
    The_tich = (4*M_PI*pow(bankinh, 3))/3;

    while (Chu_vi > counter)
    {
        counter *= 10;
        n1 -= 1;
    }
    counter = 10;
    while (The_tich > counter)
    {
        counter *= 10;
        n2 -= 1;
    }
    if (bankinh == 0) {
        std::cout << 0 << "\n" << 0;
    } else {
    std::cout << std::fixed << std::setprecision(n1) << Chu_vi << "\n";
    std::cout << std::fixed << std::setprecision(n2) << The_tich << "\n";
    }
    return 0;
}
