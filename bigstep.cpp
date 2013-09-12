// bigstep.cpp -- count as directed
#include <iostream>
const int by = 5;
int main()
{
	using std::cout;
	using std::endl;
	cout << "Counting by " << by << "s:\n";
	for (int i = 0; i < 100; i = i + by)
		cout << i << endl;
	return 0;	
}