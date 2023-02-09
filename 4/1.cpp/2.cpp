#include <iostream>

int Nhap(){
    int n;
    std::cin >> n;
    return n;
}

void TinhTong(int n, float &S){
    S = 0;
    for (int i = 1; i <= n; i++)
        S += i * i;    
}

int main(){
    int n;
    float S;
    n=Nhap();
    TinhTong(n, S);
    std::cout << S;
    return 0;
}
