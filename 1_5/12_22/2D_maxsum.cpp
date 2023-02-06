#include <bits/stdc++.h>
using namespace std;

const int MAXR = 100;
const int MAXC = 100;

void NhapMaTran(int a[MAXR][MAXC], int &r, int &c)
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
}

void TongCacSoLonNhat(int a[MAXR][MAXC], int r, int c, int &sum)
{
    int max = a[0][0], count = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
                count = 1;
            }
            else if (max == a[i][j])
                count++;
        }
    sum = count * max;
}

int main()
{
    int a[MAXR][MAXC], r, c, sum;
    NhapMaTran(a, r, c);
    TongCacSoLonNhat(a, r, c, sum);
    std::cout << sum;
    return 0;
}
