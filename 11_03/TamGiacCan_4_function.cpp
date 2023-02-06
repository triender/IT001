#include <iostream>
using namespace std;

void tamGiacCan_4()
{
    int n;
    cin >> n;
    if ((n >= 3) and (n <= 10))
    {
        // in ra n-1 dòng trên
        // in dòng giữa
        for (int i = 1; i <= n; i++)
        {
            for (int j = n - i; j > 0; j--)
                cout << "  ";
            for (int k = 0; k < i; k++)
                cout << "* ";
            cout << endl;
        }
        // in n-1 dòng dưới
        for (int i = 1; i < n; i++)
        {
            for (int k = 0; k < i; k++)
                cout << "  ";
            for (int j = n - i; j > 0; j--)
                cout << "* ";
            cout << endl;
        }
    }
    else
        cout << "Khong thoa dieu kien nhap.";
}

int main()
{

    tamGiacCan_4();
    return 0;
}
