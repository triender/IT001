#include <iostream>
#include <string.h>
using namespace std;
const int MAXN = 100;
const int MAX1 = 10001, MAX2 = 250, MAX3 = 200;
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
    if (na == 0)
        return true;
    int i = 0, j = 0;
    while (i < na && j < nb)
    {
        if (A[i] == B[j])
        {
            i++;
            j++;
            if (i == na)
                return true;
        }
        else
        {
            j = j - i + 1;
            i = 0;
        }
    }
    return false;
}

bool is_sub_str(char *s1, char *s2)
{
    char *temp = new char[MAX2]{};
    strcpy(temp, s1);
    strlwr(temp);
    int i = 0, j = 0;
    int len1 = strlen(s1), len2 = strlen(s2);
    while (i < len1 && j < len2)
    {
        if (temp[i] == s2[j])
        {
            i++;
            j++;
            if (j == len2)
                return true;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }
    return false;
}
int main()
{
    // int a[MAXN], na, b[MAXN], nb;
    // NhapMang(a, na);
    // NhapMang(b, nb);
    // if (is_MangCon(a, na, b, nb) == true)
    //     std::cout << "true";
    // else
    //     std::cout << "false";

    char **Sach = new char *[MAX1] {};
    char *temp = new char[MAX2]{};
    int k = 0;
    while (true)
    {
        cin.getline(temp, MAX2);
        if (temp[0] == '.')
            break;
        else
        {
            Sach[k] = new char[MAX2]{};
            strcpy(Sach[k], temp);
            k++;
            delete[] temp;
            temp = new char[MAX2]{};
        }
    }
    char *key = new char[MAX3];
    cin.getline(key, MAX3);
    if (is_sub_str(Sach[0], key))
        cout << -1;

    return 0;
}
