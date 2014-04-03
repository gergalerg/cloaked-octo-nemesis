// functon returning the max between integers
#include <iostream>

using namespace std;

int max(int num1, int num2);

int main()
{
	int num1 = 4;
	int num2 = 5;

	cout << max(3, 7) << endl;
}

int max(int num1, int num2)
{
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}