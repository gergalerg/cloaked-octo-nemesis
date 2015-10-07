#include <iostream>

const int t = 3;
constexpr int multiply(int x, int y) 
{
    return x * y;
}
constexpr int getDefaultArraySize(int mul) 
{
    return t * mul;
}

constexpr int factorial(int n)
{
    return n > 0 ? n *factorial(n -1) : 1;
}

class Circle
{
public:
    constexpr Circle(int x, int y, int radius) : _x (x), _y(y), _radius(radius ){}
    constexpr double getArea() const
    {
        return _radius *_radius * 3.141519;
    }
private:
    int _x;
    int _y;
    int _radius;
};


int main() 
{
    int val = multiply(30, 4);
    std::cout << val << '\n';
    int my_array[getDefaultArraySize(3)];
    constexpr Circle c(0, 0, 10);
    constexpr double area = c.getArea();
    std::cout << area << "\t\n";
}
