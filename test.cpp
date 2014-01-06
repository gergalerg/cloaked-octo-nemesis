// test.cpp
#include <iostream>
#include <climits>

int main()
{
	using namespace std;
	int sloth = 3;
	const int * ps = &sloth;
	int * const finger = &sloth;
	cout << sloth << endl;
	return 0;
}

