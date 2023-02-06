#include <iostream>

const int MAXN = 150;
void NhapMang(int A[MAXN], int &n)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
        std::cin >> A[i];
}

void DemCacSoLonNhat(int A[MAXN], int n, int &count)
{
    count = 0;
    int max = A[0], min = A[0];
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
            count = 1;
        }
        else if (max == A[i])
            count++;
        if (min >= A[i])
            min = A[i];
    }

    if (min == max)
        count = 0;
}

int main()
{
    int a[MAXN], n, count;
    NhapMang(a, n);
    DemCacSoLonNhat(a, n, count);
    std::cout << count;
    return 0;
}
