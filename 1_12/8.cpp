#include <iostream>
#include <string.h>
using namespace std;
const int MAX = 1000;

void myStrcpy(char *s, int vt, char *s1, int k)
{
    int i;
    for (i = vt; s1[k]; i++)
    {
        s[i] = s1[k];
        k++;
    }
    s[i] = '\0';
}

bool is_sub_str(char a, char *s2)
{
    int len = strlen(s2);
    int j = 0;
    while (s2[j])
        if (a == s2[j])
            return true;
        else
            j++;
    return false;
}

int DemTuTrongChuoi(char *s1, char *s2)
{
    int Dem = 0;
    if (!is_sub_str(s1[0], s2))
        Dem++;
    for (int i = 0; i < strlen(s1) - 1; i++)
        if (is_sub_str(s1[i], s2) && !is_sub_str(s1[i + 1], s2))
            Dem++;
    return Dem;
}

void split(char *s1, char *s2)
{
    char *temp = new char[MAX]{};
    int tu = DemTuTrongChuoi(s1, s2);
    char **Tu = new char *[tu]{};
    int len = strlen(s1);
    int j = 0, k = 0;
    bool check = false;
    for (int i = 0; i < len; i++)
    {
        while (!is_sub_str(s1[i], s2) && i < len)
        {
            temp[k] = s1[i];
            i++;
            k++;
            check = true;
        }

        temp[k] = '\0';
        k = 0;
        if (check)
        {
            Tu[j] = new char[k+1]{};
            strcpy(Tu[j], temp);
            delete[] temp;
            temp = new char[MAX]{};
            j++;
            check = false;
        }
    }
    for (int i = 0; i < tu; i++)
        cout << Tu[i] << "\n";
}

int main()
{
    char *s1 = new char[MAX]{};
    char *s2 = new char[20]{};
    cin.getline(s1, MAX);
    cin.getline(s2, 20);
    split(s1, s2);
    return 0;
}