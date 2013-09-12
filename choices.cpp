// choices.cpp -- array variations
#include <iostream>
#include <vector>
#include <array>
int main()
{
	using namespace std;
	// C, original C++
	// double a1[4] = {1.2, 2.4, 3,6, 4.8};
	vector<double> a2(4);
	a2[0] = 1.2;
	a2[1] = 2.4;
	a2[2] = 3.2;
	a2[3] = 5.4;
	cout << a2[0] << endl;
	cout << a2[1] << endl;
	cout << a2[2] << endl;
	cout << a2[3] << endl;
	array<double, 4> a3 = {3.14, 2.72, 1.62, 1.41};
	cout << a3[0] << endl;
	cout << a3[1] << endl;
	cout << a3[2] << endl;
	cout << a3[3] << endl;
	array<double, 4> a4;
	a4 = a3;
	cout << a4[0] << endl;
	cout << a4[1] << endl;
	cout << a4[2] << endl;
	cout << a4[3] << endl;
	cout << "a3[0]: " << a3[0] << " at " << &a3[0] << endl;
	cout << "a3[1]: " << a3[1] << " at " << &a3[1] << endl;
	cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
	cout << "a3[3]: " << a3[3] << " at " << &a3[3] << endl;
	a3[-1] = 20.2;
	cout << "a3[-1]: " << a3[-1] << " at " << &a3[-1] << endl;
	a2.at(1) = 2.33;
	cout << a2[0] << endl;
	cout << a2[1] << endl;
	cout << a2[2] << endl;
	cout << a2[3] << endl;
}