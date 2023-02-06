#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    double x, y;
    double temp;
    std::cin >> x >> y;
    temp = x;
    x = y;
    y = temp;

    std::cout << x << std::endl << y;
    return 0;
}