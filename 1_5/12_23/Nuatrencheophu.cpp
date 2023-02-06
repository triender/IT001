#include <iostream>
#define MAXR 100
#define MAXC 100

void NhapMaTran(int a[MAXR][MAXC], int &n)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> a[i][j];
        }
    }
}

void InDuongCheoChinh(int a[MAXR][MAXC], int &n){
    int nc = n - 1, nr = n - 1;
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
            std::cout << a[i][j] << " ";
        nc--;
        std::cout << "\n";
    }
}

int main(){
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    InDuongCheoChinh(a, n);
    return 0;
}
