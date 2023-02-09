#include <iostream>
using namespace std;
const int MAXN = 200;
int Input(){
    int n;
    cin >> n;
    return n;
}
void NhapMang(char *a, int &n){
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void XuatMang(char *a, int n){
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i]>= 'A' && a[i] <= 'Z')
            a[i] = tolower(a[i]);
        else if(a[i] >= 'a' && a[i] <= 'z')
            a[i] = toupper(a[i]);
        cout << a[i] << "\t";
    }
}
int main() {
    char a[MAXN];
    int n;
    n = Input(); // Yêu cầu: n được nhập khi gọi hàm Input!
    NhapMang(a, n);
    XuatMang(a, n);
    return 0;
}
