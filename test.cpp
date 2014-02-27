// test.cpp
#include <iostream>
#include <climits>
#include <cmath>
#include <array>


void sneezy(int x);
void grumpy(int &x);
int main()
{
	using namespace std;
	int times = 20;
	sneezy(times);
	grumpy(times);
	return 0;
}

void sneezy(int x)
{
	using namespace std;
	cout << "passing by value: int X = " << x << endl;
}
void grumpy(int &x)
{
	std::cout << "Passing by reference x = " << x << std::endl;
}
