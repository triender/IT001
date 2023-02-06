#include <iostream>
using namespace std;

int* input(){
    int *a = new int;
    cin >> *a;
    return a;
}

void output(int *a){
    cout << *a;
}
int main(){
    int *a;
    a=input();
    output(a);
    return 0;
}
