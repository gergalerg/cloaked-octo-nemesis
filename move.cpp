#include <iostream>
#include <vector>
#include <time.h>

std::vector<int> doubleValues (const std::vector<int>& v)
{
    std::vector<int> new_values;
    new_values.reserve(v.size());
    for (auto itr = v.begin(), end_itr = v.end(); itr != end_itr; ++itr)
    {
        new_values.push_back( 2 * *itr);
    }
    return new_values;
}
int x;
int& getRef() 
{
    return x;
}

std::string getName()
{
    return "Alex";
}

int main()
{
    std::vector<int> v; 
    std::srand(time(NULL)); // Seed random number generator
    for (int i = 0; i < 100; i++)
    {
        v.push_back( std::rand() % 21);
    }
    for (auto x : v) std::cout << x << "\t";
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "\n";
    v = doubleValues(v);
    for (auto x : v) std::cout << x << "\t";

    getRef() = 4;
    std::cout << "\n\n" << getRef() << '\n';
    std::cout << getName() << std::endl;
    int *val1 = &getRef();


}