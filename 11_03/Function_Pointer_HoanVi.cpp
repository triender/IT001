#include <iostream>

double input(){
    double a;
    std::cin >> a;
    return a;
}

void input(double &x){
    std::cin >> x;
}

void HoanVi(double *px, double *py){
    double temp = *px;
    *px = *py;
    *py = temp;
}

void output(double &ans){
    std::cout << ans << std::endl;
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
