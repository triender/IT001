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

bool DoiXungQuaDuongCheoPhu(int a[MAXR][MAXC], int n)
{
    int na = n;
    for (int i = 0; i < na - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
            if (a[i][j] != a[n - 1 - j][n - 1 - i])
                return false;
        na--;
    }
    return true;
}

int main()
{
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout << std::boolalpha << DoiXungQuaDuongCheoPhu(a, n);
    return 0;
}
