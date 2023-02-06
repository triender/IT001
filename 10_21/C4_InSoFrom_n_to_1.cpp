#include <iostream> 

using namespace std;

int main (){
    int t; cin >> t;
    if ((t>=1)and(t<=100))
    {
        for (int i = t; i > 0; i--)
        {
            cout << i << " ";
        }
    }
    return 0;
} 