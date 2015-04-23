#include <iostream>
#include <string>

class baseDMA
{
private:
    char * label;
    int rating;
public:
    baseDMA( char *l = "null", int r = 0) : label(l), rating(r) {}
    baseDMA(const baseDMA & rs) { }
    virtual ~baseDMA(){}
    virtual void showBase() {std::cout << label << std::endl; 
                        std::cout << rating << std::endl;}
    baseDMA & operator=(const baseDMA & rs){ return *this;}
};

int main()
{

    baseDMA * mybase = new baseDMA("My base", 5);
    baseDMA *newbase;
    newbase = mybase;
    newbase->showBase();
    mybase->showBase();
    return 0;
}