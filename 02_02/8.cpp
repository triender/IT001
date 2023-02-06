#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

struct SinhVien
{
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien &s)
{
    cin.getline(s.MASV, 10);
    cin.getline(s.HoTen, 100);
    cin.getline(s.NgaySinh, 12);
    cin >> s.GioiTinh;
    cin.ignore();
    cin >> s.DiemToan >> s.DiemLy >> s.DiemHoa;
    cin.ignore();
    s.DTB = (s.DiemToan + s.DiemLy + s.DiemHoa) / 3;
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

int main()
{
    SinhVien A;
    Nhap(A);
    Xuat(A);
    return 0;
}
