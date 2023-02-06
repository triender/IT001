#include <iostream>
#include <string>

using namespace std;

int main()
{
    string String_Input; cin >> String_Input;
    int len = String_Input.length();
    long int Input_Array[len];
    for (int i = 0; i < len; i++)
    {
        Input_Array[i] = int(String_Input[i])-48;
    }
    
    int Min = 9;
    for (int i = 0; i < len; i++)
    {
        if (Min > Input_Array[i]){
            Min = Input_Array[i];
        }
    }  
    cout << endl << Min;
    return 0;
}
