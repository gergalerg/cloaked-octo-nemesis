// test.cpp
#include <iostream>
#include <climits>
#include <cmath>
#include <array>


typedef double real;
void sneezy(int x);
void grumpy(int &x);
int main()
{
	using namespace std;
	real myrealint = 40;
	int times = 20;
	sneezy(times);
	grumpy(times);
	cout << myrealint << endl;
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
