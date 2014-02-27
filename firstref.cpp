// firstref.cpp -- defining and using a reference
#include <iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int & rodents = rats; // reodents is a reference to rats
	int * prats = &rats;
	int * const pr = &rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "pointer to rats = " << &prats << endl;
	cout << "pointer to rats = " << prats << endl;
	cout << "pointer pr = " << *pr << endl;


}