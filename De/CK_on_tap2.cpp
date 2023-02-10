#include <iostream>
using namespace std;

int main()
{
    int n, red = 0, yellow = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            red += i * i;
        else
            yellow += i * i;
    }
    cout << red - yellow;
    return 0;
}
