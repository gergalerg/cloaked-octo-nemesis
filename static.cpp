// static.cpp -- using a static local var
#include <iostream>
// constants
const int ArSize = 10;

const int fingers = 10;


void strcount(const char * str);

int main()
{
    using namespace std;
    char input[ArSize];
    char next;

    cout << "Enter a line:\n";
    cin.get(input, ArSize);
    while (cin)
    {
        cin.get(next);
        while (next != 'n')   // string didn't fit!
            cin.get(next);     // dispose of remainder
        strcount(input);
        cout << "Enter the next line (empty line to quit): \n";
        cin.get(input, ArSize);
    }
    cout << "Bye\n";
    return 0;
}

