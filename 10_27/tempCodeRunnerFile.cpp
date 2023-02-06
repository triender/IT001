#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int kq;
    for (int i = 0; i < n; i++)
    {
        kq += pow(i, 2);
    }
    cout << kq;
    return 0;
}
