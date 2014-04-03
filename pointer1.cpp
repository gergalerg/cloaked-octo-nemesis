#include <iostream>

using namespace std;

class Box
{
public:
	double length;
	double breadth;
	double height;

	// Member functions declaration
	double getVolume(void);
	void setLength( double len );
	void setBreadth( double bre );
	void setHeight( double hei );
};

double Box::getVolume(void)
{
	return length * breadth * height;
}

void Box::setLength( double len )
{
	length = len;
}

void Box::setBreadth( double bre )
{
	breadth = bre;
}

void Box::setHeight( double hei )
{
	height = hei;
}


int main() 
{
	Box Box1;
	double volume = 0.0;

	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);

	volume = Box1.getVolume();
	cout << "Volume of Box1 : " << volume << endl;
	return 0;
}
