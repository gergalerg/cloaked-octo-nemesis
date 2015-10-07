#include <iostream>
#include <memory>
#include <typeinfo>
#include <cstring>

typedef std::auto_ptr<int> ai;
typedef std::shared_ptr<int> si;

int main()
{
    si b ( new int(10));
    si a(b);
    std::cout << typeid(a).name() << '\n' <<  *a << '\n';
    std::cout << typeid(a).name() << '\n'<< *b << '\n';

    char a1[100] = "Original";
    std::cout << a1 << std::endl;
    strcat(a1, "New");
    std::cout << a1 << std::endl;

}