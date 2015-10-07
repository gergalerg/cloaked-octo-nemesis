#include <iostream>

class IntPtr 
{
private:
    const int * const _p_other;
public:
    IntPtr(const int *p_other)
            : _p_other(p_other == 0 ? new int( *p_other) : new int(0) ){}
    void Show() {std::cout << *_p_other << '\n'; };
};

struct A 
{
    double x;
};

template <typename T1, typename T2>
auto compose(T1 a, T2 b) -> decltype(a + b) { return a + b; };

int main()
{
    const A* a = new A{5};
    decltype(a) a1 = a;
    std::cout << a1->x;
}