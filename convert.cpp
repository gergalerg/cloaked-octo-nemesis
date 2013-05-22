// convert.cpp == converts stone to pound
#include <iostream>
int stonetolb(int);	// function prototype
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in staone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone =  ";
	cout << pounds << " pounds." << endl;
	int aunt = stonetolb(20);
	int aunts = aunt + stonetolb(10);
	cout << "Ferdie weighs: " << stonetolb(16) << " pounds." << endl;
	return 0;
}

int stonetolb(int sts)
{
	int pounds = 14 * sts;
	return pounds;
}
