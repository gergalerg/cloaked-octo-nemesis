#include <iostream>
#include <string>
#include <cstring>
int main() 
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// assignment for string objects and character arrays
	str1 = str2;
	strcpy(charr1, charr2);

	// appending for string objects and character arrays
	str1 += " paste";
	strcat(charr1, " juice");

	// findiing the legnth of a strin gobject
	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains " 
		<< len1 << " characters.\n";
	cout << "the string " << charr1 << " contains "
		<< len2 << " characters.\n";
	return 0;
}
