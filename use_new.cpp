// use_new.cpp -- using the new operator
#include <iostream>
int main()
{
	int nights = 1001;
	int * pt = new int; // allocate space for an int
	*pt = 1001;	// store a value there.

	std::cout << "nights value = ";
	std::cout << nights << ": location " << &nights << std::endl;
	std::cout << "int ";
	std::cout << "value = " << *pt << ": location = " << pt << std::endl;

	double * pd = new double;  // allocate space for a double
	*pd = 1000000001.0;   // store a double there

	std::cout << "double value = " << *pd << ": location = " << pd << std::endl;
	std::cout << "Location of pointer pd: " << &pd << std::endl;
	std::cout << "size of pt = " << sizeof(pt) << std::endl;
	std::cout << "size of pd = " << sizeof pd;
	std::cout << ": size of *pd = " << sizeof(*pd) << std::endl;
	return 0;
}