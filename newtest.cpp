#include <iostream>
#include <fstream>

# define ISTREAM ifile

int main()
{
	int a, b, c;
	std::cout << "Enter: ";
	  std::ifstream ifile("stdin.txt");
	  ISTREAM >> a >> b;
	  c = a + b;
	  std::cout << a << '+' << b << '=' << c << std::endl;
	  return 0;
}
