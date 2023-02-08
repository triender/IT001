#include <iostream>
#define MAXN 100

struct SONGUYEN
{
    int a;     // số nguyên cần đếm số lần xuất hiện trong mảng A
    int count; // Số lần xuất hiện của số nguyên a trong A
};

void NhapMang(int *a, int &n)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
}

void DemSoLanXuatHien(int *a, int na, SONGUYEN *b, int &nb)
{
    bool check = true;
    nb = 0;
    b[0].a = a[0];
    b[0].count = 1;
    for (int i = 1; i < na; i++)
    {
        check = true;
        for (int j = 0; j < nb + 1; j++)
            if (a[i] == b[j].a)
            {
                b[j].count++;
                check = false;
            }
        if (check){
            nb++;
            b[nb].a = a[i];
            b[nb].count = 1;
        }
    }
    nb++;
}

void Xuat(SONGUYEN *a, int n)
{
    for (int i = 0; i < n; i++)
        std::cout << a[i].a << " xuat hien " << a[i].count << " lan"
                  << std::endl;
}

int main()
{
    int a[MAXN];
    SONGUYEN b[MAXN];
    int na, nb;

    NhapMang(a, na);

    DemSoLanXuatHien(a, na, b, nb);

    Xuat(b, nb); // Chú ý hàm này template đã có viết sẵn!!!

    return 0;
}
