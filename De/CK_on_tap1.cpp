// link đề
// https://docs.google.com/document/d/1e9J3zdl3cQwSmO6pIlVHr62dLFbz2cBieaf7AfyTVEs/edit?usp=sharing
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int res = 0, check = 0;
    if ((S[0] == 'R') or (S[0] == 'L'))
        check = 1;
    if (S[0] == 'A')
        res++;

    for (int i = 1; i < S.length(); i++)
    {
        if ((S[i] == 'L' || S[i] == 'R') && (check == 1))
        {
            check = 0;
            res++;
        }
        else if ((S[i] == 'L' || S[i] == 'R') && (check == 0))
            check++;
        if ((S[i] == 'A') and (check == 0))
            res++;
    }
    cout << res;
}