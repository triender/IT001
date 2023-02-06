#include <iostream>
#include <cmath>

float TinhTong_6(int n);
int main(){
    int n;
    std::cin >> n;

    std::cout << TinhTong_6(n);

    return 0;
}

float TinhTong_6(int n){
    float ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = sqrt((pow(ans, 2)) + (pow(i, 2))); 
    }
    return ans;
}