#include <iostream>

template<typename T, typename U>
class Couple
{
private:
    T first_;
    U second_;
    bool deleted_;
public:
    Couple() : deleted_(false) {}
    //explicit Couple(T f) : first_(f) {}
    Couple(Couple & s) : first_(s.first_), second_(s.second_) {}
    void setFirst(T & s) { first_ = s; }
    T &First() {   return first_; }
    U &Second() { return second_; }
    void MarkDeleted() { deleted_ = true; }
    bool IsDeleted() { return deleted_; }
};


int main()
{
    Couple<int, int> mycouple;
    Couple<int, int> couple_copy;
    int x = 3;
    mycouple.setFirst(x);

    couple_copy = mycouple;

    int output  = mycouple.First();
    std::cout.setf(std::ios::boolalpha);
    std::cout << ++output << std::endl;
    std::cout << ++couple_copy.First() << std::endl;
    std::cout << couple_copy.IsDeleted() << std::endl; 
    couple_copy.MarkDeleted();
    std::cout << couple_copy.IsDeleted() << std::endl; 
    
    return 0;
}