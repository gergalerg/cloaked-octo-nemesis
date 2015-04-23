#include <iostream>
#include <string>

const int CLIENTS = 4;

class Brass {
private:
    char *name;
public:
    Brass(char *s) : name(s) {}
    virtual ~Brass(){std::cout << "Destroyed!"; }
    virtual void ShowName() { std::cout << name << std::endl; }
};
class BrassPlus : public Brass
{
private:
    char *nickname;
public:
    BrassPlus(char *n1, char *nick) : Brass(n1) { nickname = nick; }
    //Brass::ShowName();
};
int main()
{

    Brass * p_clients[CLIENTS];
    p_clients[0] = new Brass("Greg");
    p_clients[1] = new BrassPlus("Herbert", "Mangione");
    p_clients[1]->ShowName();
    Brass example("heap?");
    std::cout << &example << std::endl;
    Brass *freestore = new Brass("freestore");
    std::cout << &freestore << std::endl;

    return 0;
}