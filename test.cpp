#include <cstddef>
#include <iostream>

template<typename F, typename A>
void Fwd(F f, A a)
{
    f(a);
}

void g(int *i)
{
    std::cout << "Function g called\n";
}

int main()
{
    g(NULL);
    g(0);

    Fwd(g, NULL);
}


