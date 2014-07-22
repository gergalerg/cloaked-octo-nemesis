// twofile1.cpp -- variables with external and internal 
#include <iostream>
int tom = 3; // external var definition
int dick = 30; // external var definition
static int harry = 300; // static internal linkage

// function prototype
void remote_access();

int main()
{
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick <<  " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    return 0;
}
