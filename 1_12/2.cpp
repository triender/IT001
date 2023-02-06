#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa(char s[]);
// void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);


int main() {
	char s[MAX];

	cin.getline(s, MAX);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}

void myStrcpy(char s[], int vt, char s1[], int k){
    int i, k;
    for (i = vt; s1[k]; i++)
    {
        s1[i] = s[i];
        k++;
    }
    i++;
    s[i] = '\0';
}

void ChuanHoa(char s[])
{
    char s1[MAX] = {'\0'};
    // Đưa về 1 dấu cách
    
}


