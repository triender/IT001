#include <iostream>
const int MAXN = 100;
void NhapMang(int *a, int &n){
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
}

void DemSoLanXuatHien(int *a, int n){
    int max, nb = 0;
    int B[MAXN], count[MAXN];
    bool check = true;
    B[0] = a[0];
    count[0] = 1;
    for (int i = 1; i < n; i++)
    {
        check = true;
        for (int j = 0; j < nb + 1; j++)
            if (a[i] == B[j])
            {
                count[j]++;
                check = false;
            }
        if (check){
            nb++;
            B[nb] = a[i];
            count[nb] = 1;
        }
    }
    nb++;
    for (int i = 0; i < nb; i++)
        std::cout << B[i] << " xuat hien " << count[i] << " lan"
                  << std::endl;
}

int main() {
    int a[MAXN], n;
    NhapMang(a, n);
    DemSoLanXuatHien(a, n);
    return 0;
}
