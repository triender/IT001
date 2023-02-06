#include <iostream>
#define MAXN 100000

void NhapMang(int A[], int N) {
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void XuatMang(int A[], int N) {
    std::cout << N << '\n';
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
    std::cout << std::endl;
}

void TronMangTangDan(int c[MAXN], int &nc, int a[MAXN], int na, int b[MAXN], int nb){
    nc = na + nb;
    int ia = 0, ib = 0, ic = 0; 
    while (ia < na && ib < nb)
    {
        if (a[ia] >= b[ib])
        {
            c[ic] = b[ib];
            ib++;
        }else{
            c[ic] = a[ia];
            ia++;
        }
        ic++;
    }
    while (ia < na)
    {
        c[ic] = a[ia];
        ia++;
        ic++;
    }
    while (ib < nb)
    {
        c[ic] = b[ib];
        ib++;
        ic++;
    }
}

int main() {
    int a[MAXN], na, b[MAXN], nb, c[MAXN], nc;
    std::cin >> na;
    std::cin >> nb;
    NhapMang(a, na);
    NhapMang(b, nb);
    TronMangTangDan(c, nc, a, na, b, nb);
    XuatMang(c, nc);
    return 0;
}
