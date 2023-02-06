#include <bits/stdc++.h>
using namespace std;

const int MAXR = 100;
const int MAXC = 100;

void NhapMaTran(int a[MAXR][MAXC], int &r, int &c)
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SapXepCotGiamDan(int a[MAXR][MAXC], int &r, int &c)
{
    // chạy j trước i để lấy từng cột
    // rồi sắp xếp từng cột
    for (int j = 0; j < c; j++)
        for (int i = 0; i < r - 1; i++)
            for (int k = i + 1; k < r; k++)
                if (a[i][j] < a[k][j])
                    swap(a[i][j], a[k][j]);
}

void XuatMaTran(int a[MAXR][MAXC], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int a[MAXR][MAXC], r, c;
    NhapMaTran(a, r, c);
    SapXepCotGiamDan(a, r, c);
    XuatMaTran(a, r, c);
    return 0;
}
