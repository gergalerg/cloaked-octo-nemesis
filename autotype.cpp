#include <iostream>
#include <vector>

using namespace std;

template<typename T> 
void printall(vector<T> v)
{
    for (auto p = v.begin(); p != v.end(); ++p)
        cout << *p << "\t";
    cout << "\n";
}

template<typename T, typename U>
void multiply(const vector<T>& vt, const vector<U>& vu)
{
    vector<T> vtemp;
    for (int i=0; i < vt.size(); ++i)
    {
        auto tmp = vt[i] * vu[i];
        vtemp.push_back(tmp);
    }

    for (auto x: vtemp) cout << x << "\t";
}

struct X {
    int x,y;
    int operator()(int t) { return t; }
    void f() {
        [=]() -> int {
            return operator()(this->x + y);
        };
    }
};

int main()
{
    vector<double> h = {1,2,3,4,5};
    printall(h);
    multiply(h,h);
    cout << "\n";


    X x;
    x.x  = 3;
    x.y = 4;
     x.f();

}