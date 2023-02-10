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
                cout << a[i] << "\t";
    return ans;   
}