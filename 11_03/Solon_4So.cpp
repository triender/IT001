#include <iostream>
using std::cin;
using std::cout;

float so_lon(float m, float n) {
    if (n > m)
        m = n;
    return m;
}

float nhap_so() {
    float n;
    cin >> n;
    return n;
}

void xuat_so(float n) { std::cout << n; }

int main() {
    xuat_so(
        so_lon(
        so_lon(nhap_so(), nhap_so()),
        so_lon(nhap_so(), nhap_so())
        )
    );

    return 0;
}
