#include <iostream>
#include <cmath>
#define M_PI

void f();
double res;
double x = 2;

int main() {
    std::cout << "x = " << x << std::endl;
    f();
    std::cout << "f = " << res << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    f();
    std::cout << "f = " << res << std::endl;
    return 0;
}

void f() {
    res = 2 * pow(sin(3 * M_PI - 2 * x), 2) * (pow(cos(5 * M_PI + 2 * x), 2));
}



