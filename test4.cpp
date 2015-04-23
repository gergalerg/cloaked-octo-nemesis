#include <iostream>
#include <map>
#include <sstream>
#include <cstring>

using namespace std;
istream * input;

enum Token_value {
    NAME,   NUMBER, END,
    PLUS='+',   MINUS='-', MUL='*', DIV='/',
    PRINT=';', ASSIGN='=', LP='(', RP=')'
};
Token_value curr_tok = END;
double error(const string & st)
{
    cerr << "Error: " << st;
    return 1;

}
int main(int argc, char* argv[])
{
    switch (argc) {
        case 1:
            input = &cin;
            cout << *input << endl;
            break;
        case 2:
            input = new istringstream(argv[1]);
            cout << argv[1] << endl;
            break;
        default:
            error("Too many arguments\n");
            return 1;
    }


    return 0;
}