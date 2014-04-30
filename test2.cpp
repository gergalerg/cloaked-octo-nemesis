#include <iostream>
#include <array>

void show(std::array<std::string, 4> da);

int main()
{
	std::array<std::string, 4> Snames;


	Snames = {"Spring", "Summer", "Fall", "winter"};
	show(Snames);
	return 0;
}

void show(std::array<std::string, 4> da) 
{
	for (int i = 0; i < 4; i++)
	{
	std::cout << da[i] << std::endl;
	}
}