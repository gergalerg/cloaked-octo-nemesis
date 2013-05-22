// hexoct2.cpp -- display values in hex and octal
#include <iostream>
using namespace std;
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "chest = " << chest << " (dec for 42)" << endl;
	cout << hex;
	cout << "waist = " << waist << " changed to cout << hex" << endl;
	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	return 0;
}
