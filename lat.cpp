// lat.cpp -- latitude homework 
#include <iostream>
int main()
{ 
	using namespace std;
	const float const_min = 60;
	const float const_sec = 3600;
	float degrees, minutes, seconds;
	cout << "Enter the degrees: ";
	cin >> degrees;
	cout << endl;
	cout << "enter the minutes of arc: ";
	cin >> minutes;
	cout << endl;
	cout << "Enter the seconds of arc: ";
	cin >> seconds;
	float result, result1, result2;
	result1 =  (minutes / const_min);
	cout << result1 << endl; 
	result2 =  (seconds / const_sec);
	cout << result2 << endl; 
	result = degrees + result1 + result2;
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds, = " << result << endl;


	return 0;
}
