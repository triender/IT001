#include <bits/stdc++.h>
const int MAXN = 255;
void NormalizeString(char s[]){
    s[0] = toupper([0]);
    
    for (int i = 0; i < strlen(s) - 1; i++)
        if (s[i-1] == ' ' && s[i] != ' ')
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);   
}