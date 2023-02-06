#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
#define MAX 255

int myStrcmp(const char *s1, const char *s2);

int main() {
	char s1[MAX], s2[MAX];
	cin.getline(s1, MAX);
	cin.getline(s2, MAX);
	int kt = myStrcmp(s1, s2);
	cout << kt << endl;
	return 0;
}

int myStrcmp(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] > s2[i]) return 1;
        else if (s1[i] < s2[i]) return -1;
        i++;
    }
    if (s1[i] && !s2[i]) return 1;
    else if (!s1[i] && s2[i]) return -1;
    else return 0;
}
