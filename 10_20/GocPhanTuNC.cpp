#include <iostream> 

using namespace std;

int main () { 
    int Angle_In; cin >> Angle_In;
    int Angle_Out;
    if ((Angle_In >= 0)or((Angle_In%360) == 0)){
        Angle_Out = int((Angle_In%360)/90)+1;
    } else {
        Angle_Out = int((360+(Angle_In%360))/90+1);
    }
    cout << Angle_Out << "\t";
    return 0;
}