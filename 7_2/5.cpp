#include <bits/stdc++.h>
using namespace std;
struct DONTHUC
{
    double HeSo;
    int Mu;
};
struct DATHUC
{
    DONTHUC *DonThuc;
    int n;
};
DATHUC *Nhap()
{
    int n, k = 0;
    double temp_HeSo;
    cin >> n;
    DATHUC *A = new DATHUC;
    A->DonThuc = new DONTHUC[n];
    A->n = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp_HeSo >> A->DonThuc[k].Mu;
        if (temp_HeSo)
        {
            A->DonThuc[k++].HeSo = temp_HeSo;
            A->n++;
        }
    }
    return A;
}

void XuatDonThuc(DATHUC A, int idx)
{
    double temp_HeSo = abs(A.DonThuc[idx].HeSo);
    switch (A.DonThuc[idx].Mu) {
        case 0:
            cout << temp_HeSo;
            break;
        case 1:
            if (temp_HeSo == 1)
                cout << "x";
            else
                cout << temp_HeSo << "x";
            break;
        default:
            if (temp_HeSo == 1)
                cout << "x^" << A.DonThuc[idx].Mu;
            else
                cout << temp_HeSo << "x^" << A.DonThuc[idx].Mu;
    }
}
void XuatDau(double x)
{
    if (x < 0)
        cout << "-";
    if (x > 0)
        cout << "+";
}
void Xuat(DATHUC X)
{
    if (X.n == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (X.DonThuc[0].HeSo < 0)
        cout << "-";
    XuatDonThuc(X, 0);

    for (int i = 1; i < X.n; i++)
    {
        XuatDau(X.DonThuc[i].HeSo);
        XuatDonThuc(X, i);
    }
}
double TinhDaThuc(DATHUC X, double x)
{
    double ans = 0;
    for (int i = 0; i < X.n; i++)
        ans += X.DonThuc[i].HeSo * pow(x, X.DonThuc[i].Mu);
    return ans;
}

int main()
{
    DATHUC *B;
    B = Nhap();
    cout << "Da thuc vua nhap la: ";
    Xuat(*B);
    double x;
    cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: " << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}
