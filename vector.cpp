#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main() 
{
	array<int, 5> ai; // create an array of 5 ints
	array<double, 4> ad = {1.2, 2.1, 3.43, 4.3};
	vector<int> vi;		// create a zero-size array of in
	cout << sizeof(vi) << endl;
	int n;
	n = 1;
	vector<double> vd(n); // create an array of n doubles
	cout << sizeof(vd)<< endl;

	return 0;
}