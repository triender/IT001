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

bool isMaTranDoiXung(int a[MAXR][MAXC], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][j] != a[j][i])
                return false;
    return true;
}

int main()
{
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);

    std::cout << std::boolalpha << isMaTranDoiXung(a, n);
    return 0;
}
