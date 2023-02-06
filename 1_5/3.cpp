#include <bits/stdc++.h>
const int MAXN = 255;

int DemTuTrongChuoi(char a[]){
    int Dem;
    if(a[0] != ' ') Dem++;
    for (int i = 0; i < strlen(a)-1; i++)
        if(a[i] == ' ' && a[i+1] != ' ')
            Dem++;
    return Dem;
}

int main() {
    char s[MAXN];
    std::cin.getline(s, MAXN);
    std::cout << DemTuTrongChuoi(s);
    return 0;
}
