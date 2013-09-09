#include <iostream>
#include <cstring>

using namespace std;

int main() 
{ 
	static double fee = 56.60;
	char name[20] = "greg";
	char * pn = new char[strlen(name) + 1];
	strcpy(pn, name);
	cout << "fee: " << &fee << endl;
	double *pfee = new double;
	cout << pn << endl;
	cout << name << " at " << (int *) name << endl;
	cout << name << " at " << &name << endl;

}