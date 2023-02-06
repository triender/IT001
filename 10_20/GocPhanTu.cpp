#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int AngleInput;
    double Angle_Radiant_Calculated;
    cin >> AngleInput;
    Angle_Radiant_Calculated = AngleInput * (M_PI/180);
    AngleInput = AngleInput / 360;
    if ((AngleInput%90) == 0){
        cout << 2;
    } else if ((AngleInput%180) == 0){
        cout << 3;
    } else if ((AngleInput%270)==0){
        cout << 4;
    } else if ((AngleInput%360)==0){
        cout << 1;
    }
    else if ((cos(Angle_Radiant_Calculated)>0)and(sin(Angle_Radiant_Calculated)>0)){
        cout << 1;
    } else if((cos(Angle_Radiant_Calculated)<0)and(sin(Angle_Radiant_Calculated)>0)){
        cout << 2;
    } else if((cos(Angle_Radiant_Calculated)<0)and(sin(Angle_Radiant_Calculated)<0)){
        cout << 3;
    } else {
        cout << 4;
    }
    return 0;
}
