#include <iostream>
int TinhTong_1(int n){
    if (n == 1)
        return 1;
    return TinhTong_1(n-1)+n;
}
int main(){
    int n;
    std::cin >> n;
    
    std::cout << TinhTong_1(n);

    return 0;
}
