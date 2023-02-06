#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k); // Ham tra ve chieu dai chuoi s ke tu vi tri k
// void myMemmove(char s[], int vt, int k); // Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
// int myStrstr(char s[], char s1[]);       // Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void ChuanHoa(char s[]);

int main()
{
    char s[MAX];
    cin.getline(s, MAX); // Nhap chuoi s
    ChuanHoa(s);
    cout << s << endl;
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

void ChuanHoa(char s[])
{
    int length = myStrlen(s, 0);
    // Đưa về 1 dấu cách
    for (int i = 0; i < length - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            for (int j = i + 1; j < length; j++)
                s[j - 1] = s[j];
            length--;
            s[length] = '\0';
            i--;
        }
    }
    // làm mất khoảng trắng đầu chuỗi
    if (s[0] == ' ')
    {
        for (int j = 1; j < length; j++)
            s[j - 1] = s[j];
        length--;
        s[length] = '\0';
    }
    // Viết hoa đầu chuỗi
    s[0] = toupper(s[0]);
    // Viết hoa đầu mỗi kí tự nếu không thì viết thường
    for (int i = 1; i < length - 1; i++)
        if (s[i-1] == ' ' && s[i] != ' ')
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);        
}