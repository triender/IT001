#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long kq;
    for (int i = 1; i <= n; i++)
        kq += pow(i, 2);
    cout << kq;
    return 0;
}
