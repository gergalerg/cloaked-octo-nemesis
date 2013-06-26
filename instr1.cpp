// instrl.cpp reading more than one string
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize  = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, 20); 
    cout << " Enter your favorite dessert:\n";
    cin.getline(dessert,30);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}