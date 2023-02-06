#include <iostream>
using namespace std;

struct Point{
    int x, y;
};

void Nhap(Point &X){
    cin >> X.x >> X.y;
}

Point Nhap(){
    Point X;
    cin >> X.x >> X.y;
    return X;
}

void Xuat(Point X){
    cout << "(" << X.x << ", " << X.y << ")";
}
int main() {
    Point A, B;
    Nhap(A);
    B = Nhap();
    Xuat(A);
    std::cout << " and ";
    Xuat(B);
    return 0;
}
