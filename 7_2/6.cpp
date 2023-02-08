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
    if (temp_HeSo == 1 && A.DonThuc[idx].Mu == 1)
        cout << "x";
    else if (temp_HeSo != 1 && A.DonThuc[idx].Mu == 1)
        cout << temp_HeSo << "x";
    else if (A.DonThuc[idx].Mu == 0)
        cout << temp_HeSo;
    else if (temp_HeSo == 1 && A.DonThuc[idx].Mu != 1)
        cout << "x^" << A.DonThuc[idx].Mu;
    else if (temp_HeSo != 1 && A.DonThuc[idx].Mu != 0)
        cout << temp_HeSo << "x^" << A.DonThuc[idx].Mu;
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
DATHUC Tong2DaThuc(DATHUC *A, DATHUC *B)
{
    DATHUC Sum;
    Sum.DonThuc = new DONTHUC[100]{};
    Sum.n = 0;
    int i = 0, j = 0, k = 0;
    if (A->n == 0 && B->n == 0)
        return Sum;
    else if (A->n == 0)
    {
        for (int i = 0; i < B->n; i++)
            Sum.DonThuc[i] = B->DonThuc[i];
        Sum.n = B->n;
        return Sum;
    }
    else if (B->n == 0)
    {
        for (int i = 0; i < A->n; i++)
            Sum.DonThuc[i] = A->DonThuc[i];
        Sum.n = A->n;
        return Sum;
    }
    while (i < A->n || j < B->n)
    {
        if (A->DonThuc[i].Mu > B->DonThuc[j].Mu)
        {
            Sum.DonThuc[k++] = A->DonThuc[i++];
            Sum.n++;
        }
        else if (A->DonThuc[i].Mu < B->DonThuc[j].Mu)
        {
            Sum.DonThuc[k++] = B->DonThuc[j++];
            Sum.n++;
        }
        else
        {
            Sum.DonThuc[k].HeSo = A->DonThuc[i++].HeSo + B->DonThuc[j++].HeSo;
            Sum.DonThuc[k].Mu = A->DonThuc[i - 1].Mu;
            k++;
            if (Sum.DonThuc[k - 1].HeSo == 0)
                k--;
        }
    }
    Sum.n = k;
    return Sum;
}
int main() {
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}
