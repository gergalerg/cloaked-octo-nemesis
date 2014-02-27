// secref.cpp -- defining and using a reference
#include <iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int * pt = &rats;
	int & rodents = *pt;  // rodents is a reference to rats

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	int bunnies;
	bunnies  = 50;
	rodents = bunnies;
	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "bunnies address = " << &bunnies;
	cout << ", rodents address = " << &rodents << endl;
	return 0;
}