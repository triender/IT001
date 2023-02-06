#include <iostream>
int* NhapMang(int &n)
{
    std::cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        std::cin >> a[i];
    return a;
}

void TongCucDai(int *a, int n)
{
    long long sum = 0;

    if (n == 0)
        std::cout << "Mang RONG.";
    else if (n == 1)
        std::cout << a[0];
    else
    {
        if (a[0] > a[1])
            sum += a[0];
        if (a[n - 1] > a[n - 2])
            sum += a[n - 1];
        for (int i = 1; i < n - 1; i++)
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
                sum += a[i];
        std::cout << sum;
    }
}

int main()
{
    int *a, n;
    a = NhapMang(n); 
    TongCucDai(a, n);
    return 0;
}
