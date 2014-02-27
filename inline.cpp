// inline.cpp -- using an inline function
#include <iostream>

// an inlnie function definition
inline double square(double x) { return x * x; }
// Trying c style define
// #define square(x) ((x) * (x));

int main()
{
	using namespace std;
	double a, b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5); // can pass expressions
	cout << "a = " << a << ", b = " << b << "\n";
	cout << "c = " << c;
	cout << ", c squared = " << square(c++) << "\n";
	cout << "Now c = " << c << "\n";
	return 0;
}
