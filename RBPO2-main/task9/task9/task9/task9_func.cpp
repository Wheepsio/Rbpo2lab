#include <iostream>
#include "func.h"
#define M_PI

double y = 3;
double r = 0;

namespace Akhromeyko {
	void f() {
		r = 2 * pow(sin(3 * M_PI - 2 * y), 2) * (pow(cos(5 * M_PI + 2 * y), 2));
	}
}
