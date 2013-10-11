// num_test.cpp -- use numeric test in for loop
#include <iostream>
int main()
{
	using namespace std;
	int limit;
	limit = 10;
	cout << "ENter the starting countdown value: ";
	int i;
	for (i = limit; i; i--)
		cout << "i = " << i << "\n";
	cout << "Done now that i = " << i << "\n";
	return 0;		
}