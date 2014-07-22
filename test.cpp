// test.cpp
#include <iostream>

using namespace std;

int main(int argc, char *argv[], char **environ)
{
    cout << "argc is: " << argc << endl;
    for (int i = 0; i < argc; i++)
        cout << argv[i] << endl;
    cout << environ[0] << endl << environ[1] << endl;
    return 1;
}
