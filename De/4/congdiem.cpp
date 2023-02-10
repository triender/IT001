#include <iostream>
using namespace std;
const int MAXN = 100;
struct PhanSo {
    int TuSo, MauSo;
};

PhanSo Nhap_1_phan_so() {
    PhanSo ps;
    cin >> ps.TuSo >> ps.MauSo;
    return ps;
}

int GCD(int a, int b) {
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

PhanSo RutGonPhanSo(PhanSo ps) {
    int gcd = GCD(abs(ps.TuSo), abs(ps.MauSo));
    ps.TuSo /= gcd;
    ps.MauSo /= gcd;
    if (ps.MauSo < 0) {
        ps.TuSo = -ps.TuSo;
        ps.MauSo = -ps.MauSo;
    }
    return ps;
}

void Xuat_1_phan_so(PhanSo ps) {
    if (ps.MauSo == 0) {
        cout << "Khong thoa yeu cau bai toan" << endl;
        return;
    }
    if (ps.TuSo == 0) {
        cout << 0 << endl;
        return;
    }
    PhanSo rutgon = RutGonPhanSo(ps);
    if (rutgon.MauSo == 1) {
        cout << rutgon.TuSo << endl;
    }
    else {
        cout << rutgon.TuSo << "/" << rutgon.MauSo << endl;
    }
}
void Nhap(PhanSo *ps, int n)
{
    for (int i = 0; i < n; i++)
        ps[i] = Nhap_1_phan_so();
}
void Xuat(PhanSo *ps, int n){
    for (int i = 0; i < n; i++)
        Xuat_1_phan_so(ps[i]);
}
int main() {
    PhanSo ps[MAXN];
    int n;
    cin >> n;
    Nhap(ps, n);
    Xuat(ps, n);
    return 0;
}
