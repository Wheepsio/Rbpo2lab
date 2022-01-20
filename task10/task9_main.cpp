#include <iostream>
#include <iomanip> 
#include "func.h";

using namespace std;

int main()
{
	cout << "x = " << y << endl;
	Akhromeyko::f();
	cout << "f = " << r << endl;

	cout << "x = ";
	cin >> y;
	Akhromeyko::f();
	cout << "f = " << r << endl;
	return 0;
}