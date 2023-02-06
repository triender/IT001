#include <iostream>
using namespace std;

const int MAX = 1000;

struct Arr
{
    int A[MAX];
    int number_of_element = 0;
};

struct stack
{
    int top;
    Arr a;
};

void Push(stack &s, int In)
{
    s.top = In;
    s.a.number_of_element++;
    s.a.A[s.a.number_of_element - 1] = In;
}

void Pop(stack &s, Arr &out)
{
    out.number_of_element++;
    out.A[out.number_of_element - 1] = s.top;
    s.a.number_of_element--;
}

bool isEmpty(stack s)
{
    if (s.a.number_of_element <= 0)
        return true;
    return false;
}

bool isFull(stack s)
{
    if (s.a.number_of_element >= MAX)
        return true;
    return false;
}

int Top(stack s)
{
    return s.top;
}

void print_arr(Arr out)
{
    for (int i = 0; i < out.number_of_element; i++)
        cout << out.A[i] << " ";
}

void Testing_Push_Pop_Top_Stack(stack &s)
{
    int Input;
    Arr out;
    bool run = true;

    while (run)
    {
        cin >> Input;
        if (Input == -1)
            break;
        else if (Input == 0)
            Pop(s, out);
        else
        {
            if (isFull(s)){}
            else
                Push(s, Input);
        }
    }
    if (isEmpty(s))
        cout << "output: " << endl
             << "top: ";
    else
    {
        cout << "output: ";
        print_arr(out);
        cout << endl
             << "top: " << Top(s);
    }
}
