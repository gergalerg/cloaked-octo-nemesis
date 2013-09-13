// formore.cpp
#include <iostream>
const int ArSize = 20;
int main()
{
	using namespace std;
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
	{
		factorials[i] = i * factorials[i - 1];
		cout << factorials[i] << " * " << factorials[i-1] << endl;
	}
	for (int  i = 0; i < ArSize; i++)
	{
		cout << i << "! = " << factorials[i] << endl;
	}
	return 0;
}