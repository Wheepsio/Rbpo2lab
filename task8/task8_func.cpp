#include <iostream>
#include "func.h"
#define M_PI
using namespace std;

double y = 2;
double result = 0;
void f() {
	result = 2 * pow(sin(3 * M_PI - 2 * y), 2) * (pow(cos(5 * M_PI + 2 * y), 2));
}