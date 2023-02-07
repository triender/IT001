
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct SinhVien {
    char *MASV;
    char *HoTen;
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien *&A){
    A = new SinhVien;
    A->MASV = new char[10];
    cin.getline(A->MASV, 10);
    A->HoTen = new char[100];
    cin.getline(A->HoTen, 100);
    cin.getline(A->NgaySinh, 12);
    cin >> A->GioiTinh;
    cin.ignore();
    cin >> A->DiemToan >> A->DiemLy >> A->DiemHoa;
    A->DTB = (A->DiemToan + A->DiemLy + A->DiemHoa)/3;
}

void Xuat(SinhVien A)
{
    cout << A.MASV << "\t";
    cout << A.HoTen << "\t";
    cout << A.NgaySinh << "\t";
    cout << A.GioiTinh << "\t";
    cout << A.DiemToan << "\t";
    cout << A.DiemLy << "\t";
    cout << A.DiemHoa << "\t";
    cout << setprecision(3) << A.DTB << "\n";
}
int main() {
    SinhVien *A;
    Nhap(A);
    Xuat(*A);
    return 0;
}
