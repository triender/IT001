#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 100;

void NhapMang(int a[MAXN], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void XuatMang(int a[MAXN], int n)
{
    int i = 0;
    cout << "Mang co " << n << " phan tu";
    if (n == 0)
        cout << ".";
    else
    {
        cout << ": {";
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
                cout << a[i];
            else
                cout << a[i] << ", ";
        }
        cout << "}.";
    }
}

int main()
{
    int A[MAXN], n;
    NhapMang(A, n);
    XuatMang(A, n);
    return 0;
}
