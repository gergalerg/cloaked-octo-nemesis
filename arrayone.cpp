// arrayone.cpp == small arrays of integers
#include <iostream>
int main()
{
	using namespace std;
	int yams[10]; 	// creates an array with three elements
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int beets[1];
	beets[0] = 5;

	int yamcosts[3] = {20, 30, 5}; // create, initialize array

	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "Total beets = ";
	cout << beets[0] + beets[1] + beets[2] << endl;
	cout << "The package wth " << yams[1] << " yams costs ";
	cout << yamcosts[1] << " cents per yam.\n";
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof yams;
	cout << " bytes.\n";
	cout << "\nSize of beets array = " << sizeof beets;
	cout << " bytes.\n";
	cout << "Size of one element = " << sizeof yams[0];
	cout << " bytes.\n";
	cout << "Size of one element beets  = " << sizeof beets[0];
	cout << " bytes.\n";

	short things[] = {1,5,3,8};
	int num_elements = sizeof things / sizeof (short);
	cout << num_elements << endl;
	cout << "sizeof things " << sizeof things << endl;
	cout << "sizeof (short) " << sizeof (short) << endl;

	double plifs[] = {25, 92, 3.3};
	cout << sizeof plifs[0] << " " << plifs[2] << endl;
	return 0;
}
