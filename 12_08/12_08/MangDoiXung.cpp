#include <bits/stdc++.h>
const int MAXN = 100;

void NhapMang(int a[MAXN], int &n)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
}

bool is_MangDoiXung(int a[MAXN], int n){
    if (n == 0)
    {
        return false;  
    }else if(n == 1)
    {
        return true;
    }
    else
    {
        for (int i = 0; i < n/2; i++)
        {
            if (a[i] != a[n-1-i])
            {
                return false;
            }
        }
        return true;
    }    
}

int main() {
    int a[MAXN], n;
    NhapMang(a, n);
    if (is_MangDoiXung(a, n) == true)
        std::cout << "Mang doi xung.";
    else
        std::cout << "Mang khong doi xung.";
    return 0;
}