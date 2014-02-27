// arrobj.cpp -- functions with array objects (C+11)
#include <iostream>
#include <array>
#include <string>
//constant data
const int Seasons = 4;
const std::array<std::string, Seasons> Snames = 
 	{"Spring", "Summer", "Fall", "Winter"};

 	// function to modify array objects
 void fill(std::array<double, Seasons> * pa);
 //function that uses array object without modifying in
 void show(std::array<double, Seasons> da);

 int main() 
 {
 	std::array<double, Seasons> expenses = {43,23,12,43};
 	fill(&expenses);
 	show(expenses);
 	return 0;
 }

 void fill(std::array<double, Seasons> * pa)
 {
 	using namespace std;
 	for (int i = 0; i < Seasons; i++)
 	{
 		cout << "Enter " << Snames[i] << " expenses: ";
 	}
 }

 void show(std::array<double, Seasons> da)
 {
 	using namespace std;
 	double total = 0.0;
 	cout << "\nExpenses\n";
 	for (int i=0; i < Seasons; i++)
 	{
 		cout << Snames[i] << ":  $" << da[i] << endl;
 		total += da[i];
 	}
 	cout << "Total expenses: $" << total << endl;
 }
