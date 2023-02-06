#include <iostream>
#define MAXR 100
#define MAXC 100

void XuatMaTran(int A[][MAXC], int ar, int ac)
{
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < ac; j++)
            std::cout << A[i][j] << "\t";
        std::cout << "\n";
    }
    std::cout << "\n";
}

void NhapMaTran(int a[][MAXC], int &r, int &c)
{
    std::cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cin >> a[i][j];
        }
    }
}

void Tich2MaTran(int a[][MAXC], int ar, int ac, int b[][MAXC], int br, int bc, int c[][MAXC])
{
    for (int i = 0; i < ar; i++)
        for (int j = 0; j < bc; j++)
            for (int k = 0; k < br; k++)
                c[i][j] += a[i][k] * b[k][j];
}

int main()
{
    int a[MAXR][MAXC], m, n, // Mảng a có (m dòng x n cột)
        b[MAXR][MAXC], p,    // Mảng b có (n dòng x p cột)
        c[MAXR][MAXC];
    NhapMaTran(a, m, n);
    NhapMaTran(b, n, p);
    Tich2MaTran(a, m, n, b, n, p, c);
    // Mảng c có (m dòng x p cột)
    XuatMaTran(c, m, p);
    return 0;
}
