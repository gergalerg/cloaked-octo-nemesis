#include <iostream>
int main()
{
	using namespace std;
	int x = 20;
	{
		cout << x << endl;
		int x = 100;
		cout << x << endl;
	}
	cout << x << endl;
	// cout << y << endl;
	return 0;
}