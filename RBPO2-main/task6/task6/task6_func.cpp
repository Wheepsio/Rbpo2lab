#include <cmath>
#define M_PI

double f(double x) {
    double f;
    f = 2 * pow(sin(3 * M_PI - 2 * x), 2) * (pow(cos(5 * M_PI + 2 * x), 2));
    return f;
}

