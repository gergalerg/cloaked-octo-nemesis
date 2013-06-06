// Bmi program
#include <iostream>
int main()
{
	using namespace std;
	const double meter_conv = 0.0254;
	const double lbs_to_kg_conv = 2.2;
	double height_in_inches, weight_in_lbs;

	cout << "What is your height in inches?: ";
	cin >> height_in_inches;
	cout << endl;
	cout << "What is your Weight in lbs?: ";
	cin >> weight_in_lbs;
	cout << endl;
	double mass;
	mass = weight_in_lbs / lbs_to_kg_conv;
	double meters;
	meters = height_in_inches  * meter_conv;
	double new_height;
	new_height= meters * meters;
	double result;
	result = mass / new_height;
	cout << "Your BMI is: " << result << endl;

	return 0;
}
