// structur.cpp -- a simple structure
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable guest  {"glorious gloria", 1.88, 29.99};
	inflatable mayor {};
	// It's initialized to the indicated value
	inflatable pal = 
	{
		"Audatious Arthur",
		3.12,
		32.99
	};

	cout << "Expande your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	// pal.name is the name member of the pal variable
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";
	cout << "Volume addition = " << guest.volume + pal.volume << endl;
	return 0;
}
