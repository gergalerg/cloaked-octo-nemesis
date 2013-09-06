// arraynew.cpp == using the new operator for arrays
#include <iostream>
int main()
{
	using namespace std;
	double * p3 = new double [3]; 	// space for 3 doubles
	p3[0] = 0.2; 					// treat p3 like an array name
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << ".\n";
	cout << "Address of p3[0]: " << &p3[0] << " value is: " << p3[0] << endl;
	cout << "address of p3[1]: " << &p3[1] << " value is: " << p3[1] << endl;
	cout << "Address of p3[2]: " << &p3[2] << " value is: " << p3[2] << endl;
	p3 = p3 + 1;
	cout << "Now p3[0] is " << p3[0] << " and\n ";
	cout << "Address of p3[0]: " << &p3[0] << " value is: " << p3[0] << endl;
	cout << "address of p3[1]: " << &p3[1] << " value is: " << p3[1] << endl;
	cout << "Address of p3[2]: " << &p3[2] << " value is: " << p3[2] << endl;
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 - 1;
	delete [] p3;					// free the memory
	cout << "Deleted the memory \n";
	cout << "Address of p3[0]: " << &p3[0] << " value is: " << p3[0] << endl;
	cout << "address of p3[1]: " << &p3[1] << " value is: " << p3[1] << endl;
	cout << "Address of p3[2]: " << &p3[2] << " value is: " << p3[2] << endl;

	return 0;
}