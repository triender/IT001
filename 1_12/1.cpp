#include <iostream>
#include <string.h>
using namespace std;
const int MAX = 300;

void check(char *s)
{
    char *p = s;
    while (*s++)
    {
        if (*s >= '0' && *s <= '9')
        {
            cout << "CHUOI KHONG HOP LE.";
            return;
        }
    }
    cout << p;
}

int main()
{
    char IN[MAX];
    cin.getline(IN, MAX);
    check(IN);
    return 0;
}
