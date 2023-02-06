#include <iostream>

int main()
{
    double Num[3];
    double Max;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> Num[i];
    }
    
    for (int i = 0; i < 3; i++)
    {
        if (Max < Num[i]){
            Max = Num[i];
        }
    }
    std::cout << Max;
    return 0;
}
