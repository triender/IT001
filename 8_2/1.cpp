#include <iostream>
using namespace std;
const int MAXN = 1000;
void Input(int &n)
{
    cin >> n;
}
void NhapMang(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int KiemTra(int a[MAXN], int n)
{
    if (n <= 1)
        return -1;
    else
    {
        int check_increase = 0, check_decrease = 0;
        for (int i = 0; i < n - 1; i++)
            if (a[i] <= a[i + 1])
            {
                if (a[i] < a[i + 1])
                    check_increase++;
            }
            else
                check_decrease++;
            
        if (check_decrease != 0 && check_increase != 0)
            return -1;
        else if (check_increase == 0 && check_decrease == 0)
            return 2;
        else if (check_decrease > 0)
            return 1;
        else
            return 0;
    }
}

int main()
{
    int a[MAXN], n, kt;
    Input(n);
    NhapMang(a, n);
    kt = KiemTra(a, n);
    if (kt == 0)
        std::cout << "Tang dan";
    else if (kt == 1)
        std::cout << "Giam dan";
    else if (kt == 2)
        std::cout << "Bang nhau";
    else
        std::cout << "Mang khong tang khong giam";
    return 0;
}
