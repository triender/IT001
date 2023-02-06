#include <iostream>

void input(int &n){
    std::cin >> n;
}

int ChuSoDauTien(int n){
    if (n < 10)
        return n;
    return ChuSoDauTien(n / 10);
}

int main(){
    int a;
    input(a);
    std::cout << ChuSoDauTien(a);
    return 0;
}
