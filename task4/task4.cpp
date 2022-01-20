#include <iostream>
#include <cmath>
#define M_PI

void f(const double& x, double& res);

int main() {
    double x = 2, y;
    f(x, y);
    std::cout << "x = " << x << std::endl;
    std::cout << "f = " << y << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    f(x, y);
    std::cout << "f = " << y << std::endl;
    return 0;
}

void f(const double& x, double& res) {
    res = 2 * pow(sin(3 * M_PI - 2 * x), 2) * (pow(cos(5 * M_PI + 2 * x), 2));
}

