#include <iostream>
#define MAXN 100

void NhapMang(int A[], int &N)
{
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}
void XuatMang(int A[], int N)
{
    for (int i = 0; i < N; i++)
        std::cout << A[i] << "\t";
}

void XoaTrungNhau(int a[MAXN], int &na)
{
    for (int i = 0; i < na - 1; i++)
    {
        for (int j = i + 1; j < na; j++)
        {
            if ((a[i] == a[j]))
            {
                for (int k = j + 1; k < na; k++)
                {
                    a[k - 1] = a[k];
                }
                na--;
                i--;
            }
        }
    }
}

int main()
{
    int a[MAXN], n;
    NhapMang(a, n);
    XoaTrungNhau(a, n);
    XuatMang(a, n);
    return 0;
}
