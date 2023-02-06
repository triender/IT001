#include <iostream>
using namespace std;

const int MAXN = 150;
void NhapMang(int *A, int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
}

void NoiMang(int *C, int &nc, int *A, int &na, int *B, int &nb)
{
    nc = na + nb;
    int count_c = 0, i = 0;
    while (i < na)
        C[count_c++] = A[i++];
    for (int i = 0; i < nb; i++)
        C[count_c++] = B[i];
}

void XuatMang(int *A, int n)
{
    cout << n << endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
}

int main()
{
    int a[MAXN], na, b[MAXN], nb, c[MAXN], nc;
    NhapMang(a, na);
    NhapMang(b, nb);
    NoiMang(c, nc, a, na, b, nb);
    XuatMang(c, nc);
    return 0;
}
