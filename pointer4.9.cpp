#include <iostream>
int main()
{
	using namespace std;
	int ducks = 12;
	int *birddog = &ducks;
	int * p_birddog = &ducks;

	cout << "ducks = " << ducks << endl;
	cout << "birddog = " << *birddog << endl;
	cout << "Address of ducks = " << &ducks << endl;
	cout << "Address of *birddog = " << &birddog << endl;
	cout << "address of p_birddog = " << p_birddog << endl;
}