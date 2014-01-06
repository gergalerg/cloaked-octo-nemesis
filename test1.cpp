// test1.cpp
#include <iostream>
void show_array(const double ar[], int n);
int main() 
{
	int n = 4;		
	double ar[n];
	show_array(ar, n);
	return 0;
}

void show_array(const double ar[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}