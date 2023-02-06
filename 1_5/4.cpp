#include <bits/stdc++.h>
const int MAXN = 255;
void NormalizeString(char s[]){
    s[0] = toupper(s[0]);
    
    for (int i = 1; i < strlen(s); i++)
        if (s[i-1] == ' ' && s[i] != ' ')
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);   
}
int main() {
    char s[MAXN];
    std::cin.getline(s, MAXN);
    NormalizeString(s);
    std::cout << s;
    return 0;
}
