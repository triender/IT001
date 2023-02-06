#include <bits/stdc++.h>
using namespace std;

void Testing_Push_Pop_Top_Stack(stack<int> s){
    // vector<int> out;
    int Input;
    do
    {
        cin >> Input;
        if (Input == -1)
            break;
        else if(Input == 0){
            //out.push_back(s.top());
            s.pop();
        }else{
            s.push(Input);
        }
    } while (true);
    // for (auto &&i : out)
    //     cout << i << " ";
    cout << endl << s.top();
}

int main(){
    stack<int> s;
    Testing_Push_Pop_Top_Stack(s);
    return 0;
}