#include <iostream>
using namespace std;

void input(int *a){
    cin >> *a;
}
// * ở đây là toán tử giải tham chiếu 
void output(int *a){
    cout << *a;
}
int main(){
    int a;
    input(&a);
    output(&a);
    return 0;
}
