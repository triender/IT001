#include <iostream>
using namespace std;
const int MAXR = 100, MAXC = 100;
void NhapMaTran(int a[MAXR][MAXC], int &r, int &c){
    cin >> r >> c;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];
}
int SoLonNhat(int a[MAXR][MAXC], int r, int c){
    int Max = a[0][0];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if(Max < a[i][j])
                Max = a[i][j];
    return Max;
}
int main(){
    int a[MAXR][MAXC], r, c;
    NhapMaTran(a, r, c);
    std::cout << SoLonNhat(a, r, c);
    return 0;
}
