#include <iostream>
void input(double &x){
    std::cin >> x;
}
double input(){
    double a;
    std::cin >> a;
    return a;
}
void HoanVi(double *a, double *b){
    double temp = *a;
    *a = *b;
    *b = temp;
}

void output(double a){
    std::cout << a << std::endl;
}
int main() {
    double x, y;

    input(x);
    y=input();

    HoanVi(&x, &y);

    output(x);
    output(y);

    return 0;
}
