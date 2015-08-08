#include <iostream>

class Shape {
public:
    virtual ~Shape() {}
    virtual Shape *clone() const = 0;
};

// Thsi CRTP class implements clone() for Derived
template <typename Derived>
class Shape_CRTP : public Shape {
public:
    virtual Shape *clone() const {
        return new Derived(static_cast<Derived const&>(*this));
    }
};

#define Derive_Shape_CRTP(Type) class Type: public Shape_CRTP<Type>


int main()
{
    Derive_Shape_CRTP(Square) {};

}