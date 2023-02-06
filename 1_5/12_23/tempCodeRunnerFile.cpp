#include <iostream>

const int MAXN = 100;
void NhapMang(int A[MAXN], int &n)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> A[i];
    }
}

bool is_MangCon(int A[MAXN], int na, int B[MAXN], int nb)
{
    if (na == 0) return true;
    int i = 0, j = 0;
    while (i < na && j < nb) {
        if (A[i] == B[j]) {
            i++;
            j++;
            if (i == na) return true;
        }
        else {
            j = j - i + 1;
            i = 0;
        }
    }
    return false;
}
int main() {
    int a[MAXN], na, b[MAXN], nb;
    NhapMang(a, na);
    NhapMang(b, nb);
    if (is_MangCon(a, na, b, nb) == true)
        std::cout << "true";
    else
        std::cout << "false";
    return 0;
}
