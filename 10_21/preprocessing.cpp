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
        Input_Array[i] = int(String_Input[i]);
    }
    
    int Odd_Counter = 0;
    for (int i = 0; i < len; i++)
    {
        if ((Input_Array[i]%2) != 0)
        {
            Odd_Counter += 1;
        }
    }   
    if (Odd_Counter > 0)
    {
        cout << "false";
    }else
    {
        cout << "true";
    }
    
    return 0;
}
