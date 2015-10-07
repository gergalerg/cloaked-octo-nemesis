#include <iostream>
#include <string>
#include <algorithm>

class Array {
public:
    int size;
    int* data;

    explicit Array(int sz) : size(sz), data(new int[size]) {}
    explicit Array(const Array& other) : size(other.size), data(new int[other.size]) {
        std::copy(other.data, other.data + other.size, data);
    }
    ~Array() { delete[] this->data; }
};

int main() 
{
    Array first(20);
    first.data[0] = 25;
    { 
        Array copy(first);
        std::cout << first.data[0] <<  " " << copy.data[0] << std::endl;
    }

}