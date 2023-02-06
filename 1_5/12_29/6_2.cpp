#include <iostream>
using namespace std;

const int MAX = 10000;

struct stack
{
    int t = -1;
    int A[MAX];
};

void Push(stack &s, int In)
{
    s.t++;
    s.A[s.t] = In;
}

void Pop(stack &s)
{
    s.t--;
}

bool isEmpty(stack s)
{
    if (s.t == -1)
        return true;
    return false;
}

bool isFull(stack s)
{
    if (s.t >= MAX)
        return true;
    return false;
}

int Top(stack s)
{
    return s.A[s.t];
}

void Testing_Push_Pop_Top_Stack(stack &s)
{
    int input[MAX], i;
    do
    {
        cin >> input[i];
        i++;
    } while (input[i-1] != -1);
    i = 0;
    cout << "output: ";
    while (input[i] != -1)
    {
        if (input[i] == 0){
            if (!isEmpty(s)){
                cout << Top(s) << " ";
                Pop(s);
            }
        }
        else{
            if (!isFull(s)){
                Push(s, input[i]);
            }
        }
        i++;
    }
    cout << endl << "top: ";
    if (!isEmpty(s))
        cout << Top(s);
}

int main()
{
    stack s;
    Testing_Push_Pop_Top_Stack(s);
    return 0;
}
