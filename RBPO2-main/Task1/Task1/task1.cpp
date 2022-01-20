#include <iostream>
#include <cmath>
#define M_PI
int main()
{
	double x, f;
	x = 2;
	std::cout << "x: " << x << std::endl;
	f = 2 * pow(sin(3 * M_PI - 2 * x), 2) * (pow(cos(5 * M_PI + 2 * x), 2));
	std::cout << "f = " << f << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	f = 2 * pow(sin(3 * M_PI - 2 * x), 2) * (pow(cos(5 * M_PI + 2 * x), 2));
	std::cout << "f = " << f << std::endl;
	return 0;
}
