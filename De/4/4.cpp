#include <iostream>
const int MAXN = 100;
void NhapMang(int *A, int n){
    for (int i = 0; i < n; i++)
        std::cin >> A[i];
}
int TongGiaoCua2TapHop(int *a, int na, int *b, int nb){
    long long ans = 0;
    for (int i = 0; i < na; i++)
        for (int j = 0; j < nb; j++)
            if (a[i] == b[j])
                ans += a[i];
    return ans;   
}
int main() {
    int a[MAXN], b[MAXN];
    int na, nb;
    std::cin >> na;
    std::cin >> nb;
    NhapMang(a, na);
    NhapMang(b, nb);
    std::cout <<TongGiaoCua2TapHop(a, na, b, nb);
    return 0;
}
