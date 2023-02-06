#include <iostream>

void TinhTong_3(int n, float &S){
    S=0.0;
    
    for(int i = 1; i <= n; i++)
        S += float(1)/(2*i);
        
}
int main(){
    float S;
    int n;
    std::cin >> n;
    TinhTong_3(n,S);
    std::cout << S;

    return 0;
}
