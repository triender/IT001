#include <iostream>
using namespace std;

void hoanvi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int *NhapMang(int n){
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    return a;
}

void DaoNguocMang(int *a, int n){
    for (int i = 0; i < n/2; i++)
        hoanvi(a + i, a + (n-1-i));
}

void XuatMang(int *a, int n){
    cout << n << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main() {
    int *a, n;
    cin >> n;
    a=NhapMang(n);
    DaoNguocMang(a, n);
    XuatMang(a, n);
    return 0;
}
