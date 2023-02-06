#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

using namespace std;



int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    
    double x;

    cin >> x;
    cout << fixed << setprecision(14) << 2*x*3.14159265358979323846 << "\n" << fixed << setprecision(3) << x*x*3.14159265358979323846 << endl;
    return 0;
}
