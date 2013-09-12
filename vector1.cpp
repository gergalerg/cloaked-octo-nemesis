#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() 
{
	float treacle[10];
	float * ptreacle;

	treacle[0] = 1.2;
	treacle[9] = 10.2;

	ptreacle = treacle;
	cout << treacle[0] << " " << treacle[9] << endl;
	cout << *ptreacle << " " << * (ptreacle + 9) << endl;

	return 0;
}
