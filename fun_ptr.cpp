// fun_ptr.cpp -- pointers to functions
#include <iostream>
double betsy(int);
double pam(int);
double greg(int);

// second argument is pointer to type double functions
// that takesa  type int argument
void estimate(int lines, double (*pf)(int));

int main()
{
	using namespace std;
	int code;

	cout << "How many lines of code do you need? 30 lines. \n ";
	code = 30;
	cout << "Betsy's estimate: \n";
	cout << betsy << "\t" << pam << endl;
	estimate(code, betsy); 
	cout << "Here's Pam's estimate: \n";
	estimate(code, pam);
	cout << "Here's Greg's estimate \n";
	estimate(code, greg);
	
	return 0;
}

double betsy(int lns)
{
	return 0.05 * lns;
}
double greg(int lns)
{
	return 0.05 * lns;
}

double pam(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
	std::cout << lines << " lines will take ";
	std::cout << (*pf)(lines) << " hour(s)\n";
}