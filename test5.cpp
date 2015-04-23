#include <iostream>
#include <valarray>
#include <string>
#include <cassert>
class Star {
private:
   std::string name;
public:
    Star(){}
    void setName(char * st) { name = st; };
    void viewName(){ std::cout << name << std::endl; }
    ~Star(){ std::cout << "Deleting Star object\n";}
};

class Foo
{
public:
    Foo() {
        std::cout << "Foo::constructor() " << std::endl;
    }
    Foo(Foo const& copy) {
        std::cout << "Foo::copyconstructor() " << std::endl;
    }
    Foo& operator=(Foo const& copy) {
        std::cout << "foo::assign() " << std::endl;
        return *this;
    }
};

class Baz
{
private:
    int m_foo;
public:
    Baz(int foo) : m_foo(foo) {}
    int getBaz() { return m_foo; }
};

int DoBaz(Baz baz)
{
    int i = baz.getBaz();
    return i;
}

class MyString
{
    char * name;
public:
    MyString(const char * p); // initializes object with char p
};

struct add_x 
{
private:
    int x;
public:
    explicit add_x(int x) : x(x) {}
    int operator()(int y) { return x + y;}
};
int main()
{
    long mylong = 45;
    add_x add42(mylong);
    int i  = add42(mylong);
    std::cout << i << std::endl;
    assert(i==90);
    std::cout << "Continues past first assert" << std::endl;
    assert(i == 95);
    std::cout << "Doesn't continue " << std::endl;

    return 0;
}