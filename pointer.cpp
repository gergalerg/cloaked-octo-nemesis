// pointer.cpp -- our first pointer variable
#include <iostream>
int main() 
{
	using namespace std;
	int updates = 6; // declare a variable
	int *p_updates; // declare a pointer to an int
	p_updates = &updates; // assign address of int to pointer

	// express values two ways
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	// express address two ways
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;
	cout << "size of updates = " << sizeof(updates) << endl;
	cout << "size of *p_updates = " << sizeof(p_updates) << endl;

	// use pointer to change value
	*p_updates = *p_updates + 1;
	cout << "now updates = " << updates << endl;
	return 0;
}