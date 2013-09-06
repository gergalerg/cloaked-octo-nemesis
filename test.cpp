// testbed.cpp
#include <iostream>

int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wren";
	char * ps;

	ps = animal;
	cout << "bird: " << ps << endl;
	cout << (int *) animal << endl;
	cout << (int *) ps << endl;
	cout << &ps + 1 << endl;
	return 0;
}

