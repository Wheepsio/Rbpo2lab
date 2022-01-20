#include <iostream>
#include <cmath>
#define M_PI

double f(double x) {
    double f;
    f = 2 * pow(sin(3 * M_PI - 2 * x), 2) * (pow(cos(5 * M_PI + 2 * x), 2));
    return f;
}

int main() {
    double x = 2;
    std::cout << "x = " << x << std::endl;
    std::cout << "f = " << f(x) << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "f = " << f(x) << std::endl;
    return 0;
}