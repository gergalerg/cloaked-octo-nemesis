// hexoctl.cpp -- shows hex and octal literals
#include <iostream>
int main()
{
	using namespace std;
	int chest = 42;		// decimal integer literal
	int waist = 0x42; 	// hexadecimal  integer literal
	int inseam = 042; 	// Octal integer literal

	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal\n";
	return 0;
}
