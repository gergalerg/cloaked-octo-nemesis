// getinfo.cpp -- input and output
#include <iostream>

int main()
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more more. " << endl;
	carrots = carrots + 2;
	// The next line concatenates output
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}
