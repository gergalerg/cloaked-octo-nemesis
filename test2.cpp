#include <iostream>

int main()
{
    int n1 = 0;
    const int n2 = 0; // const object
    int const n3 = 0; // const object (same as n2)
    volatile int n4 = 0; // volatile object
    const struct X {
        mutable int n1;
        mutable int n2;
    } x = {0, 0}; // const object with mutable member

    n1 = 1;
    // n2 = 2;  //error non-modifiable object
    n4 = 3;
    x.n1 = 4;
    x.n2 = 4;

    const int & r1 = n1;
    std::cout << r1 << std::endl;
    std::cout << &r1 << std::endl;
    std::cout << &n1 << std::endl;

    return 0;
}