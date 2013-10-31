// calling.cpp -- defining, prototyping, and calling a function
#include <iostream>

void simple(); // function prototype

int main()
{
	using namespace std;
	cout << "main() will call the simple() function:\n";
	simple();   // function call
	cout << "Main() is finished with the simple() function.\n";
	// cin.get();
	return 0;
}

// function definition
void simple()
{
	using namespace std;
	int n = 8;
	for (int i = 0; i < n; i++)
		cout << "CHeers!\n";
		cout << endl;
}