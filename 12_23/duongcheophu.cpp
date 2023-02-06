#include <bits/stdc++.h>
using namespace std;

const int MAXR = 100;
const int MAXC = 100;

void NhapMaTran(int a[MAXR][MAXC], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

void InDuongCheoPhu(int a[MAXR][MAXC], int &n)
{
    for (int i = 0; i < n; i++)
        cout << a[i][n-1-i] << " ";
}

int main()
{
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    InDuongCheoPhu(a, n);
    return 0;
}
