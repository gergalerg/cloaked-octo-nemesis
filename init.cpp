// init.cpp -- type changes on initialization
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;		// int convert float
	int guess(3.9832);	// double converted to int
	// int debt = 7.2E12;	// result not defined in C++
	cout << "tree = " << tree <<  endl;
	cout << "guess = " << guess << endl;
	cout << endl;
	const int code = 66;
	int x = 66;
	// char c1 (31325); Not allowed in C++
	char c2 = (66);
	cout << "char c2 = " << c2 << endl;
	char c3 (code);
	cout << "char c3 (code) = "<< c3 << endl;
	x = 31325;
	char c5 = x;
	cout << "x = " << x <<  " char c5 = x; " << c5  << endl;

//	cout << "debt = " << debt << endl;
	return 0;
}
