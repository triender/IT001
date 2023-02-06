#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    int n;
};

void Nhap(Point *A, int &m, int &n)
{
    
}

int main() {
    Point A[10000];
    int m, n;
    
    Nhap(A, m, n);
    
    HaiDiemGanNhauNhat(A, m, n);

    return 0;
}
