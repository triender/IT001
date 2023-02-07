#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAXN 100

struct Ngay {
    int d, m, y;
};
struct SinhVien
{
    char *MASV;
    char *HoTen;
    Ngay Date;
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};
void myStrcpy(char *&s, int vt, char *s1, int vtbatdau, int vtketthuc)
{
    int i, k = vtbatdau;
    for (i = vt; k <= vtketthuc; i++)
        s[i] = s1[k++];
    s[i] = '\0';
}
void Nhap(Ngay &date){
    char *s = new char[12];
    cin.getline(s, 12);
    char *temp = new char[12]{};
    myStrcpy(temp, 0, s, 0, 1);
    date.d = atoi(temp);
    myStrcpy(temp, 0, s, 3, 4);
    date.m = atoi(temp);
    myStrcpy(temp, 0, s, 6, 9);
    date.y = atoi(temp);
}
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
        Nhap(A[i].Date);
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
        if (A[i].Date.d < 10)
            cout << 0;
        cout << A[i].Date.d << "/";
        if(A[i].Date.m < 10)
            cout << 0;
        cout << A[i].Date.m << "/";
        cout << A[i].Date.y << "\t";
        cout << A[i].GioiTinh << "\t";
        cout << A[i].DiemToan << "\t";
        cout << A[i].DiemLy << "\t";
        cout << A[i].DiemHoa << "\t";
        cout << setprecision(3) << A[i].DTB << "\n";
    }
}
int main() {
    SinhVien *A;
    int n;
    Nhap(A, n);
    Xuat(A, n);
    return 0;
}
