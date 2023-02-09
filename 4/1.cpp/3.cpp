#include <iostream>
const int MAXN = 100;
void Input(int *a, int &n){
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
}

bool is_SoHoanHao(int n){
    long long int ans = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
            ans += i;
        if (ans > n)
            return false;
    }
    if(ans == n)
        return true;
    return false;
}

int TongCacSoHoanHao(int *a, int n){
    long long int ans = 0;
    for (int i = 0; i < n; i++)
        if(is_SoHoanHao(a[i]))
            ans += a[i];
    return ans;
}

int main() {
    int a[MAXN], n;
    Input(a, n);
    std::cout << TongCacSoHoanHao(a, n);
    return 0;
}
