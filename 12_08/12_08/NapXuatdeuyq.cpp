#include <iostream>
using namespace std;

const int MAXN = 100;

void Nhap_DeQuy(int a[MAXN], int &n, int &i)
{
    if (i != n)
    {
        cin >> a[i];
        i++;
        Nhap_DeQuy(a, n, i);
    }
}

void NhapMang(int a[MAXN], int &n)
{
    cin >> n;
    int i = 0;
    Nhap_DeQuy(a, n, i);
}

void Xuat_DeQuy(int a[MAXN], int n, int &i)
{
    if (i < n)
    {
        if(i == n - 1){
            cout << a[i];
        }else{
            cout << a[i] << ", ";
        i++;
        Xuat_DeQuy(a, n, i);
        }
    }
}

void XuatMang(int a[MAXN], int n)
{
    int i = 0;
    cout << "Mang co " << n << " phan tu";
    if (n == 0)
    {
        cout << ".";
    }else{
        cout << ": {";
        Xuat_DeQuy(a, n, i);
        cout << "}.";
    }
}

int main(){
    int a[100], n;
    NhapMang(a, n);
    XuatMang(a, n);
    return 0;
}