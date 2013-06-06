// arith.cpp -- some C++ arithmetic
#include <iostream>
int main() 
{
	using namespace std;
	double hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed point
	cout << "Enter a number: ";
	cin >> hats;
	cout << "enter another number: ";
	cin >> heads;

	cout << "hats = " << hats << "; heads  = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "Hats * heads = " << hats * heads << endl;
	cout << "Hats / heads = " << hats / heads << endl;
	cout << "and that's the way we do's it!" << endl;
	return 0;
}
