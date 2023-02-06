#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << a << b << c;

    if ((a == b) && (b == c)){
        std::cout << "Bang nhau.";
    }else if ((a <= b) and (b <= c)){
        std::cout << "Tang dan.";
    }else if ((a >= b) and (b >= c)){
        std::cout << "Giam dan.";
    }else{
        std::cout << "Khong tang khong giam.";
    }

    return 0;
}
