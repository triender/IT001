#include <iostream>
#define MAXR 100
#define MAXC 100

void NhapMaTran(int a[MAXR][MAXC], int &r, int &c){
    std::cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cin >> a[i][j];
        }
    }
}

void XuatMaTran(int A[MAXR][MAXC], int ar, int ac) {
    for (int i = 0; i < ar; i++) {
        for (int j = 0; j < ac; j++)
            std::cout << A[i][j] << "\t";
        std::cout << "\n";
    }
    std::cout << "\n";
}

void Cong2MaTran(int A[MAXR][MAXC], int ar, int ac, int B[MAXR][MAXC], int br, int bc, int C[MAXR][MAXC], int &cr, int &cc){
    cr = ar;
    cc = ac;
    for (int i = 0; i < ar; i++)
    {
        for (int j = 0; j < ac; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int a[MAXR][MAXC], ar, ac, // Mảng a có (ar dòng x ac cột)
        b[MAXR][MAXC], br, bc, // Mảng a có (br dòng x bc cột)
        c[MAXR][MAXC], cr, cc; // Mảng a có (cr dòng x cc cột)
    NhapMaTran(a, ar, ac);
    NhapMaTran(b, br, bc);
    Cong2MaTran(a, ar, ac, b, br, bc, c, cr, cc);
    XuatMaTran(c, cr, cc);
    return 0;
}
