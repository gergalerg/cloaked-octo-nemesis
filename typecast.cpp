// typecast.cpp -- forcing type changes 3.14
#include <iostream>
int main() 
{
	using namespace std;
	double auks;
	int  bats, coots;

	// the following statement adds the values as double,
	// then converts the result to int
	auks = 19.99 + 11.99;

	// These statements add values as int
	bats = (int) 19.99 + (int) 11.99; // Old C syntax
	coots = int (19.99) + int (11.99); // New C++ syntax
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;

	wchar_t ch = 'Z';
	cout << "The code for " << ch << " is "; // print as char
	cout << int(ch) << endl;		// Print as int
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl; 	// using static_cast

	cout << endl << "*************************"  << endl;
	cout << "Int without delcaration " << float (200.00) << endl;
	return 0;
}


