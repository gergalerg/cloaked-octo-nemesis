// instr2.cpp = reading more than one word with getline
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter you name:\n";
    cin.get(name, ArSize).get(); // Reads through newline
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
