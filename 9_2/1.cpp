#include <iostream>
using namespace std;

const int MAX = 10000;

struct queue
{
    int a[MAX] = {};
    int size = 0, front = MAX - 1, back = MAX - 1;
    bool reverse = false;
};

bool Is_full(queue A)
{
    if (A.size == MAX)
        return 1;
    return 0;
}
void Enqueue(queue &A, int a)
{
    if (!Is_full(A))
    {
        A.size++;
        if (A.back > 0)
        {
            A.a[A.back] = a;
            A.back--;
        }
        else if (A.back == 0)
        {
            A.a[A.back] = a;
            A.back = MAX - 1;
        }
        else if (A.back == MAX - 1 && A.size > 0)
        {
            A.reverse = true;
            A.a[A.back] = a;
            A.back--;
        }
    }
}

void Dequeue(queue &A)
{
    if (A.size > 0 && A.front > 0)
    {
        A.size--;
        A.front--;
    }
    else if (A.size > 0 && A.front == 0)
    {
        A.size--;
        A.front = MAX - 1;
        A.reverse = false;
    }
}

void check(queue A)
{
    for (int i = 0; i < MAX; i++)
        cout << A.a[i] << " ";
    cout << endl;
}

bool Is_empty(queue A)
{
    if (A.size == 0)
        return 1;
    return 0;
}

int size(queue A)
{
    return A.size;
}

int Front(queue A)
{
    return A.a[A.front];
}

int Back(queue A)
{
    return A.a[A.back+1];
}

void Duyet(queue A)
{
    if (A.reverse)
    {
        for (int i = A.back; i < MAX; i++)
            cout << A.a[i] << " ";
        for (int i = 0; i < A.front; i++)
            cout << A.a[i] << " ";
    }
    else
    {
        if (A.back == MAX - 1 && A.size > 0)
        {
            for (int i = 0; i < A.front; i++)
                cout << A.a[i] << " ";
        }
        else
        {
            for (int i = A.back + 1; i <= A.front; i++)
                cout << A.a[i] << " ";
        }
    }
    cout << endl;
}
void Duyet_Mang(int *A, int n){
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}
void processing_on_queue(queue A)
{
    int input, idx = 0;
    int B[MAX] = {};
    bool run = true;
    while (run)
    {
        cin >> input;
        switch (input)
        {
        case 0:
            if (!Is_empty(A))
            {
                B[idx++] = A.a[A.front];
                Dequeue(A);
            }
            break;
        case -1:
            run = false;
            break;
        default:
            if (!Is_full(A))
            {
                Enqueue(A, input);
            }
            break;
        }
    }
    cout << "output: ";
    if (idx > 0)
        Duyet_Mang(B, idx);
    cout << "\nfront: ";
    if (!Is_empty(A))
        cout << Front(A);
    cout << "\nback: ";
    if (!Is_empty(A))
        cout << Back(A);
}
int main()
{
    queue q;
    processing_on_queue(q);
    return 0;
}
