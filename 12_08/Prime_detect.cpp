/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/
#include <iostream>
#include <cmath>
#define MAXN 100

void NhapMang(int a[MAXN], int &n)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
}

int is_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        int count = 0;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count++;
                return 0;
                break;
            }
        }
        return 1;
    }
}

void TachMang(int a[MAXN], int &na, int b[MAXN], int &nb, int c[MAXN], int &nc)
{
    nb = 0;
    nc = 0;
    int i;
    for (i = 0; i < na; i++)
    {
        if (is_prime(a[i]))
        {
            b[nb] = a[i];
            nb++;
        }
        else
        {
            c[nc] = a[i];
            nc++;
        }
    }
}
void XuatMang(int *A, const int &N)
{
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main()
{
    int a[MAXN], na, b[MAXN], nb, c[MAXN], nc;
    NhapMang(a, na);
    TachMang(a, na, b, nb, c, nc);

    XuatMang(a, na);
    std::cout << std::endl;
    XuatMang(b, nb);
    std::cout << std::endl;
    XuatMang(c, nc);
    std::cout << std::endl;

    return 0;
}
