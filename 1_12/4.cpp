#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
    char s[MAX];
    cin.getline(s, MAX);
    char *s2 = new char[MAX]{};
    if (myStrcmp(s, s2) == 0)
        cout << "Chuoi rong." << endl;
    else
        DemTieng(s);
    return 0;
}

int myStrlen(char s[], int k)
{
    int len = 0;
    while (s[k] != '\0')
    {
        k++;
        len++;
    }
    return len;
}

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

int myStrcmp(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] > s2[i])
            return 1;
        else if (s1[i] < s2[i])
            return -1;
        i++;
    }
    if (s1[i] && !s2[i])
        return 1;
    else if (!s1[i] && s2[i])
        return -1;
    else
        return 0;
}

int DemTuTrongChuoi(char a[])
{
    int Dem = 0;
    if (a[0] != ' ')
        Dem++;
    for (int i = 0; i < myStrlen(a, 0) - 1; i++)
        if (a[i] == ' ' && a[i + 1] != ' ')
            Dem++;
    return Dem;
}

void split(char **s2, char *s1)
{
    char *temp = new char[MAX]{};
    int len = myStrlen(s1, 0);
    int j = 0, k = 0;
    bool check = false;
    for (int i = 0; i < len; i++)
    {
        while (s1[i] != ' ' && i < len)
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
            s2[j] = new char[MAX]{};
            myStrcpy(s2[j], 0, temp, 0);
            delete[] temp;
            temp = new char[MAX]{};
            j++;
            check = false;
        }
    }
}

void DemTieng(char s1[])
{
    int dem = DemTuTrongChuoi(s1);
    char **s2 = new char *[dem] {};
    split(s2, s1);
    int a[dem] = {};
    for (int i = 0; i < dem; i++)
    {
        if (a[i] == 0)
        {
            a[i]++;
            for (int j = i + 1; j < dem; j++)
            {
                if (myStrcmp(s2[i], s2[j]) == 0)
                {
                    a[i]++;
                    a[j] = 1;
                }
            }
            cout << s2[i] << ": " << a[i] << "\n";
        }
    }
}
