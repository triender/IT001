#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    int *xy;
};

void Nhap(Point *A, int &m, int &n)
{
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        A[i].xy = new int[n];
        for (int j = 0; j < n; j++)
            cin >> A[i].xy[j];
    }
}

void Xuat(Point *A, int n, int i){
    cout << "(";
    int k;
    for (k = 0; k < n - 1; k++)
        cout << A[i].xy[k] << ", ";
    cout << A[i].xy[k] << ")";
}

double Tinh_D(Point *A, int n, int i, int j){
    double D;
    for (int k = 0; k < n; k++)
        D += pow((A[i].xy[k] - A[j].xy[k]), 2);
    return sqrt(D);
}

void HaiDiemGanNhauNhat(Point *A, int m, int n){
    double min_D = Tinh_D(A, n, 0, 1), D;
    int idx1 = 0, idx2 = 1;
    for (int i = 0; i < m - 1; i++)
        for (int j = i + 1; j < m; j++)
        {
            D = Tinh_D(A, n, i, j);
            if (min_D > D)
            {
                min_D = D;
                idx1 = i;
                idx2 = j;   
            }   
        }
    Xuat(A, n, idx1);
    cout << ", ";
    Xuat(A, n, idx2);
}

int main() {
    Point A[10000];
    int m, n;
    
    Nhap(A, m, n);
    
    HaiDiemGanNhauNhat(A, m, n);

    return 0;
}
