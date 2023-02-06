#include <iostream>
using namespace std;
const int MAXN = 100;

struct Point{
    int x, y;
};

void Nhap(Point *X, int &n){
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> X[i].x >> X[i].y;
}

void Xuat(Point *X, int n){
    for (int i = 0; i < n; i++)
        cout << "(" << X[i].x << ", " << X[i].y << ")" << "\n";
}
int main() {
    Point points[MAXN];
    int n;
    Nhap(points, n);
    Xuat(points, n);
    return 0;
}
