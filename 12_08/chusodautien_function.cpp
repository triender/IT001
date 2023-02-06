#include <iostream>

void input(int &n){
    std::cin >> n;
}

void ChuSoDauTien(int a, int &first){
    while (a >= 10)
        a /= 10;
    first = a;
}

int main(){
    int a, first;
    input(a);
    ChuSoDauTien(a, first);
    std::cout << first;
    return 0;
}
