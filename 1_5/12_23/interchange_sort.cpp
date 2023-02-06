#include <iostream>
#define MAXN 100000

void NhapMang(int A[], int &N)
{
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}
void hoanvi(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void interchange_sort_decending(int *a, int &n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[j] > a[i]) hoanvi(a[i], a[j]);
}

void XuatMang(int A[], const int &N)
{
    std::cout << N << std::endl;
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main()
{
    int a[MAXN], n;

    NhapMang(a, n);

    interchange_sort_decending(a, n);

    XuatMang(a, n);

    return 0;
}
