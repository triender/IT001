#include <iostream>
#include <cmath>
using namespace std;
const int MAXN = 100;

struct POINT
{
    longlong x, y;
};

void NHAP(POINT *X, int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> X[i].x >> X[i].y;
}

void Xuat(POINT X)
{
    cout << "(" << X.x << ", " << X.y << ")";
}

double Tinh_D(POINT A, POINT B)
{
    return sqrt(pow((A.x - B.x), 2) + pow((A.y - B.y), 2));
}

int Kiem_tra_thang_hang(POINT A, POINT B, POINT C)
{
    double a, b, c;
    a = Tinh_D(A, B);
    b = Tinh_D(A, C);
    c = Tinh_D(B, C);
    if (a + b == c || a + c == b || b + c == a) return 1;
    return 0;
}

void XUAT_TAMGIAC(POINT *X, int n)
{

    for (int i = 0; i < n - 2; i++)
        for (int j = 1; j < n - 1; j++)
            for (int k = 2; k < n; k++)
            {
                if(Kiem_tra_thang_hang(X[i], X[j], X[k]) == 0)
                {
                    cout << "[";
                    Xuat(X[i]);
                    cout << ", ";
                    Xuat(X[j]);
                    cout << ", ";
                    Xuat(X[k]);
                    cout << "]" << endl;
                }
            }
}