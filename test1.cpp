#include <iostream>
#include <string>


class Item
{
private:
    std::string ItemName;
public:
    Item();
    Item(std::string & st) { ItemName = st; };
    void show() { std::cout << "ItemName is " << ItemName << std::endl;}
};
struct Node
{
    Item item;
};
int main()
{
    std::string name = "Greg";
    Item greg(name);
    greg.show();

    return 0;
}