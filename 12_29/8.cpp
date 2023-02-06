#include <iostream>

void input(float *x){
    std::cin >> *x;
}
void input(float *&x){
    x = new float;
    std::cin >> *x;
}
void output(float *a){
    std::cout << *a << std::endl;
}
int main(){
    float a, *b;
    input(&a);
    input(b);
    output(&a);
    output(b);
    return 0;
}
