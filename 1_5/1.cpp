#include <iostream>
#include <string.h>
using namespace std;
const int MAXN = 255;
void NhapChuoi(char a[])
{
    cin.getline(a,254);
}
int DemChuInHoa(char a[])
{
    int Dem = 0;
    for (int i = 0; i < strlen(a); i++)
        if (int(a[i]) > 'A' && int(a[i]) < 'Z')
            Dem++;
    return Dem;
}
int main()
{
    char hoten[MAXN];
    NhapChuoi(hoten);
    std::cout << DemChuInHoa(hoten) << endl;
    return 0;
}
