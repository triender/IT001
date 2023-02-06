#include <iostream>
#include <climits>
#include <bits/stdc++.h>
#define MAXN 150000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void sort(int a[MAXN], int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

void merge_2_Sorted_subArray(int a[MAXN], int l, int middle, int r){
    int nb = r - middle + 1;
    int b[nb];
    for (int i = 0; i < nb; i++)
    {
        b[i] = a[middle];
        middle++;
    }
    
    int c[r+1];
    int ia = 0, ib = 0, ic = 0;
    int na = middle + 1;
    while (ia < na && ib < nb)
    {
        if (a[ia] >= b[ib])
        {
            c[ic] = b[ib];
            ib++;
        }else{
            c[ic] = a[ia];
            ia++;
        }
        ic++;
    }
    while (ia < na)
    {
        c[ic] = a[ia];
        ia++;
        ic++;
    }
    while (ib < nb)
    {
        c[ic] = b[ib];
        ib++;
        ic++;
    }

    for (int i = 0; i < r; i++)
    {
        a[i] = c[i];
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

	int l=0, r=n-1, middle =(l+r)/2;
    merge_2_Sorted_subArray(a, l, middle, r);

    XuatMang(a, n);

    return 0;
}
