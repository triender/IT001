#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << ((((n%360)+360)%360)/90)+1;
    return 0;
}
