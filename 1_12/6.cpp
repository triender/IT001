#include <iostream>
#include <string.h>
using namespace std;
const int MAX1 = 10001, MAX2 = 250, MAX3 = 200;

void to_lower(char *s){
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        s[i] = tolower(s[i]);
}

bool is_sub_str(char *s1, char *s2){
    char *temp = new char[MAX2]{};
    strcpy(temp, s1);
    to_lower(temp);
    int i = 0, j = 0;
    int len1 = strlen(s1), len2 = strlen(s2);
    while(i < len1 && j < len2)
    {
        if (temp[i] == s2[j]) {
            i++;
            j++;
            if (j == len2) return true;
        }
        else {
            i = i - j + 1;
            j = 0;
        }
    }
    return false;
}

void print_sub_str(char **s1, char *s2, int k){
    to_lower(s2);
    for (int i = 0; i < k; i++)
        if (is_sub_str(s1[i], s2))
            cout << s1[i] << "\n";    
}

int main()
{
    char **Sach = new char *[MAX1] {};
    char *temp = new char[MAX2] {};
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
    print_sub_str(Sach, key, k);
    
    return 0;
}