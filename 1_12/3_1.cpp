#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
    char s[MAX];
    cin.getline(s, MAX); // Nhap chuoi s
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else
        DemKyTu(s);

    return 0;
}

int myStrlen(char s[], int k){
    int len = 0;
    while (s[k] != '\0')
    {
        k++;
        len++;
    }
    return len;
}

int myStrcmp(char s1[MAX], char s2[MAX]){
    int len = myStrlen(s1, 0);    
    if (len == 0)
    {
        return 0;
    }
    return 1;
}

void DemKyTu(char *s){
    int 
}
