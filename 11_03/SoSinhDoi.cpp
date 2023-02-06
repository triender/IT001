#include <iostream>
#include <math.h>

int SoNguyenTo(int n){
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(double(n)); i++)
        if (n%i == 0) return 0;
    return 1;
}

void InCacCapSoSinhDoi(int a){
    int count = 0;
    for (int i = 2; i <= a-2; i++)
    {
        if (SoNguyenTo(i)and(SoNguyenTo(i+2)))
        {
            std::cout << i << ", " << i+2 << std::endl;
            count += 1;
        }
    }
    std::cout << "Tong: " << count << " cap so sinh doi < " << a;
}

void Input(int &a){
    std::cin >> a;
}

int main() {
    int a;
    Input(a);
    InCacCapSoSinhDoi(a);
    return 0;
}
