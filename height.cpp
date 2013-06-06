// Height program from exercises
#include <iostream>
int main()
{
	using namespace std;
	const float Conversion_factor = 12;
	int height_in_inches;
	
	cout <<  "What is your height in inches?: ";
	cin >> height_in_inches;
	cout << endl;
	cout << height_in_inches / Conversion_factor << " feet tall " << endl;
	
	return 0;
}
