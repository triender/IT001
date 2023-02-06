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
    int Input, i = 0;
    int out[MAX];
    bool run = true;
    while (run)
    {
        cin >> Input;
        if (Input == -1)
            break;
        else if (Input == 0)
        {
            if (!isEmpty(s))
            {
                out[i] = Top(s);
                i++;
                Pop(s);
            }
        }
        else
        {
            if (!isFull(s))
            {
                Push(s, Input);
            }
        }
    }
    cout << "output: ";
    if (i > 0)
        for (int j = 0; j < i ; j++)
            cout << out[j] << " ";
    cout << endl
         << "top: ";
    if (!isEmpty(s))
        cout << Top(s);
}

int main()
{
    stack s;
    Testing_Push_Pop_Top_Stack(s);
    return 0;
}
