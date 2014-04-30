#include <iostream>

float FastInvSqrt(float x);

int main() 
{
	using namespace std;

	cout << FastInvSqrt(12.5) << endl;
}
float FastInvSqrt(float x) {
	float xhalf = 0.5f * x;
	std::cout << xhalf << std::endl;
	int i = *(int*)&x;  //evil floating point bit level hacking
	i = 0x5f3759df - (i >> 1);  // what the fuck
	std::cout << i << std::endl;
	x = *(float*)&i;
	x = x*(1.5f - (xhalf*x*x));
	return x;
}
