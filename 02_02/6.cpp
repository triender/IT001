#include <iostream>
#include <cmath>
using namespace std;
const int MAXN = 101;

struct Point
{
    int x, y;
};

void Nhap(Point *&points, int &n){
    cin >> n;
    points = new Point[n];
    for (int i = 0; i < n; i++)
        cin >> points[i].x >> points[i].y;
}

void Xuat(Point *points, int n){
    for (int i = 0; i < n; i++)
        cout << "(" << points[i].x << ", " << points[i].y << ")\n";
}
int main() {
    Point *points;
    int n;
    Nhap(points, n);
    Xuat(points, n);
    return 0;
}
