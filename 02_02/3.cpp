#include <iostream>
#include <cmath>
using namespace std;
const int MAXN = 100;

struct Point
{
    long long int x, y;
    double D;
};

void Nhap(Point *X, int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> X[i].x >> X[i].y;
        X[i].D = sqrt(pow(X[i].x, 2) + pow(X[i].y, 2));
    }
}

void Xuat(Point X)
{
    cout << "(" << X.x << ", " << X.y << ")";
}

Point DiemGanGocToaDoNhat(Point *X, int n)
{
    int idx = 0;
    double min_D;
    min_D = X[0].D;
    for (int i = 0; i < n; i++)
        if (min_D > X[i].D)
        {
            idx = i;
            min_D = X[i].D;
        }
    return X[idx];
}
int main()
{
    Point points[MAXN];
    int n;
    Nhap(points, n);
    std::cout << "Diem gan goc toa do nhat la: ";
    Xuat(DiemGanGocToaDoNhat(points, n));
    return 0;
}
