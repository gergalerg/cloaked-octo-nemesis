// ptrstr.cpp -- using pointers to string
#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wren";
	char * ps;

	cout << animal << " and ";
	cout << bird << "\n";
	cout << "Enter a kind of animal: ";
	// cin >> animal;

	ps = animal; //set ps to point to string
	cout << ps << "!\n"; //ok, same as using animal
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	ps = new char[strlen(animal) + 1]; // get new storage
	cout << "strlen(animal): " << strlen(animal) << endl;
	strcpy(ps, animal); // copy string to new storage
	cout << "After using strcpy(): \n";
	cout << animal << " at " <<  (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	delete [] ps;
	cout << ps << " at " << (int *) ps << endl;
	char food[20] = "carrots";
	cout << food << endl;
	strncpy(food, "a picnic basket filled with many goodies", 10);
	food[10] = '\0';
	cout << food << endl;
	cout << strlen(food) << " strlen(food) " << endl;
	return 0;
}
