// delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>

using namespace std;
char * getname(void);
int main()
{
	char * name; 	// create pointer to name but no storage

	name = getname();	// assign address of string to us
	cout << name << " at " << (int *) name << "\n";
	delete [] name;		// memory freed

	name = getname();
	cout << name << " at "  << (int *) name << "\n";
	delete [] name; 		// memory freed again
	return 0;
}

char * getname() 	// return pointer to new string
{
	char temp[80];		// temporary storgae
	cout << "Enter the last name: ";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);

	return pn;
}