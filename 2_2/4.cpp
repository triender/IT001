#include <bits/stdc++.h>
using namespace std;
const int MAXN = 101;

struct POINT
{
    int x, y;
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
    double ans = pow(abs(A.x - B.x), 2) + pow(abs(A.y - B.y), 2);
    ans = sqrt(ans);
    return ans;
}

bool Kiem_tra_tamg_giac(POINT A, POINT B, POINT C)
{
    double a, b, c;
    a = Tinh_D(A, B);
    b = Tinh_D(A, C);
    c = Tinh_D(B, C);
    if (a + b > c && a + c > b && b + c > a)
        return 1;
    return 0;
}

void XUAT_TAMGIAC(POINT *X, int n)
{
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                if (Kiem_tra_tamg_giac(X[i], X[j], X[k]))
                {
                    cout << "[";
                    Xuat(X[i]);
                    cout << ", ";
                    Xuat(X[j]);
                    cout << ", ";
                    Xuat(X[k]);
                    cout << "]"
                         << "\n";
                }
}
int main()
{
    int n;
    POINT a[MAXN];
    NHAP(a, n);

    XUAT_TAMGIAC(a, n);
    return 0;
}
