#include <cmath>
#define M_PI

static double x = 2;
static double res;

static void f() {
    res = 2 * pow(sin(3 * M_PI - 2 * x), 2) * (pow(cos(5 * M_PI + 2 * x), 2));
}