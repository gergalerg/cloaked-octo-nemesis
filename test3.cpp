#include <iostream>
#include <cstring>

using namespace std;

struct Enode {
    Enode *left;
    Enode *right;
};

int main()
{
    Enode* n = new Enode;
    Enode* pn = new Enode;
    n->left  = pn;
    cout << sizeof(n) << endl;
    cout << sizeof(pn) << endl;
    cout << n << endl;
    cout << pn << endl;

    return 0;
}