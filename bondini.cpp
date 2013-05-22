// bondini.cpp -- using escape sequences
#include <iostream>
int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:__________\b\b\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code  << "...\n";
	cout << "\aCode verified! Proceed wit plaz3!\n";
	cout << "Let them eat g\u00E2teau.\nAlso g\u00F6rper";
	return 0;
}
