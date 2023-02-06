#include <iostream>

void NhapMang(int *&, int &);
void XuatMang(int *, int);
int main()
{
    int *a, n;
    NhapMang(a, n);
    XuatMang(a, n);
    return 0;
}

void NhapMang(int *&a, int &n)
{
    std::cin >> n;
    a = new int[n];
    for (int i; i < n; i++)
        std::cin >> a[i];
}

void XuatMang(int *a, int n)
{
    if (n == 0)
        std::cout << "Mang co " << n << " phan tu.";
    else
    {
        std::cout << "Mang co " << n << " phan tu: ";
        int i = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                std::cout << a[i] << ".";
                break;
            }
            std::cout << a[i] << ", ";
        }
    }
}