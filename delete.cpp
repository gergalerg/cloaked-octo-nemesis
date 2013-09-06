// delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>
#include <fstream>

#define SUBLIME

#define ISTREAM ifile

using namespace std;
char * getname(void); //function prototype
int main()
{
	char * name;		// create pointer but no storage

	name = getname();	// assign address of string to name
	cout << name << " at " << (int *) name << "\n";
	delete [] name; 	// memory freed

	name = getname();
	cout << name << " at " << (int *) name << "\n";
	delete [] name; 	// memory freed again
	return 0;
}

char * getname()
{
	char temp[80];
	cout << "Enter last name: ";
	std::ifstream ifile("stdin.input");
	ISTREAM >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);  // copy string into smaller space

	return pn;
}
