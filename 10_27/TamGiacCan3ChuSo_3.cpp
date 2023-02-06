#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 3 or n >= 10)
    {
        cout << "Khong thoa dieu kien nhap.";
    } else {
        
        for (int i = 1; i <= n; i++)
        {
            for (int k = n-i; k > 0 ; k--)
                cout << "  ";
            for (int j = 1; j <= i; j++)
            {
                cout << j;
                cout << "   ";
            }
            cout << "\n";
        }   
    }
    return 0;
}
