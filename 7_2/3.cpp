
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien
{
    char *MASV;
    char *HoTen;
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien *&A, int &n)
{
    cin >> n;
    cin.ignore();
    A = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        A[i].MASV = new char[10];
        cin.getline(A[i].MASV, 10);
        A[i].HoTen = new char[100];
        cin.getline(A[i].HoTen, 100);
        cin.getline(A[i].NgaySinh, 12);
        cin >> A[i].GioiTinh;
        cin.ignore();
        cin >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
        cin.ignore();
        A[i].DTB = (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa) / 3;
    }
}
void Xuat(SinhVien *A, int n){
    for (int i = 0; i < n; i++)
    {
        cout << A[i].MASV << "\t";
        cout << A[i].HoTen << "\t";
        cout << A[i].NgaySinh << "\t";
        cout << A[i].GioiTinh << "\t";
        cout << A[i].DiemToan << "\t";
        cout << A[i].DiemLy << "\t";
        cout << A[i].DiemHoa << "\t";
        cout << setprecision(3) << A[i].DTB << "\n";
    }
}
int main()
{
    SinhVien *A;
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}
