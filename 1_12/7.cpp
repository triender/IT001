#include <iostream>
#include <string.h>
using namespace std;
const int MAX = 300;

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
void myStrcpy(char s[], int vt, char s1[], int k);

int main()
{
    char s[MAX];
    cin.getline(s, MAX);
    char s1[MAX];
    myStrcpy(s1, 0, s, 0);
    Chuanhoa(s1);
    cout << s << endl
         << s1 << endl;
    return 0;
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

void Dich_chuoi(char *s, int &k, int &len)
{
    for (int j = k + 1; j < len; j++)
        s[j - 1] = s[j];
    len--;
    s[len] = '\0';
    k--;
}

void Chuanhoa(char *s)
{
    int length = strlen(s);
    for (int i = 0; i < length - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            Dich_chuoi(s, i, length);
        }
    }
    for (int i = 0; i < length - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] == '.')
        {
            Dich_chuoi(s, i, length);
        }
    }
    char *temp;
    for (int i = 0; i < length; i++)
    {
        if (s[i] == '.' && s[i + 1] != ' ')
        {
            temp = new char[MAX]{};
            myStrcpy(temp, 0, s, i + 1);
            s[i + 1] = ' ';
            length++;
            myStrcpy(s, i + 2, temp, 0);
            delete temp;
        }
    }
}
