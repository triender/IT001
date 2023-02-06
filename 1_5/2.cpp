#include <bits/stdc++.h>
using namespace std;

void Nhap(string &a){
    getline(cin, a);
}

void Invest(string a){
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            cout << char(a[i] + 32);
        else if (a[i] >= 'a' && a[i] <= 'z')
            cout << char(a[i] - 32);
        else 
            cout << a[i];
    }
}

int main()
{
    string input;
    Nhap(input);
    Invest(input);
}