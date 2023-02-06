#include <iostream>
#define MAXN 100000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void hoanvi(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}

void selection_sort_decending(int a[MAXN], int n)
{
    int i, j, max;
    for (i = n - 1; i > 0; i--)
    {
        max = 0;
        for (j = 1; j <= i; j++)
        if (a[j] < a[max])
            max = j;

        if(max!=i)
            hoanvi(a[max], a[i]);
    }
}

void XuatMang(int A[], const int &N) {
    std::cout << N << std::endl;
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main() {
    int a[MAXN], n;

    NhapMang(a, n);

    selection_sort_decending(a, n);

    XuatMang(a, n);

    return 0;
}
