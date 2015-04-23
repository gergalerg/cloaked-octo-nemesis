#include <iostream>

class A
{
    int a;
public:
    A(int n = 0) : a(n) {}
    void Show() const { std::cout << "A: " << a << std::endl;}
};
class B: public A
{
    int b;
public:
    B(int m = 0, int n = 0) : A(n), b(m) {}
    void Show() const { A::Show(); std::cout << "B: " << b << std::endl; }
};
class C : public B
{
    int c;
public:
    C(int q = 0, int m = 0, int n = 0) : B(m, n), c(q) {}
    void Show() const { B::Show(); std::cout << "C: " << c << std::endl;}
};
int main()
{
    char * s = "HEllo";

    return 0;

}