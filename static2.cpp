#include <iostream>

extern const int fingers;

void strcount(const char * str);

void strcount(const char * str)
{
    using namespace std;
    static int total = 0;   // static local variable
    int count = 0;          // automatic local variable

    cout << "\"" << str << "\" contains ";
    while (*str++)          // go to end of string
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";

}