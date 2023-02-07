
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien *s, int &n){
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.getline(s[i].MASV, 10);
        cin.getline(s[i].HoTen, 100);
        cin.getline(s[i].NgaySinh, 12);
        cin >> s[i].GioiTinh;
        cin.ignore();
        cin >> s[i].DiemToan >> s[i].DiemLy >> s[i].DiemHoa;
        s[i].DTB = (s[i].DiemToan + s[i].DiemLy + s[i].DiemHoa)/3;
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

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}