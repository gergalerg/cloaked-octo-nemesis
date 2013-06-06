// test.cpp
#include <iostream>
int main()
{
	using namespace std;
	const int int1 = 80;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << int('Q') << endl;
	cout << "SHort int: " << short int1 << endl;
	cout << "Unsigned short: ";
	cout << unsigned int int1 << endl;
	return 0;
}


