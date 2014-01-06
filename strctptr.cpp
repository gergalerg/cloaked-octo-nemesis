// strctptr.cpp -- functions with pointer to struct arguments
#include <iostream>
#include <cmath>

// structure templates
struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};
void rect_to_polar(const rect *pxy, polar *pda);
void show_polar (const polar *pda);
using namespace std;

int main()
{
	rect rplace;
	polar pplace;

	cout << "Enter the x and y values: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}

// show polar coordinates, converting angle to degrees
void show_polar (const polar *pda)
{
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * Rad_to_deg;
	cout << " degrees\n";
}
// convert rectangular to polar coordinates
void rect_to_polar(const rect * pxy, polar * pda)
{
	pda->distance = 
		sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}