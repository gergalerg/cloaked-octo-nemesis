#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, ";
    str.operator+=("World");
    //operator<<(operator<<(std::cout, str) , '\n');
    std::cout << str;
    str += "";
    std::cout << str;
}