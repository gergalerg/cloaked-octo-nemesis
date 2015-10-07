#include <iostream>
#include <array>

#define SIZE 8

template <typename U>
std::array<int, SIZE> insert_sort(std::array<U, SIZE>&);

int main()
{  
    std::array<int, SIZE> l = {2,5,4,3,1,8,6,7};
    //std::array<int, SIZE> l2 = {31,41,59,26,41,58};
    insert_sort(l);
    for (auto x: l) std::cout << x << "\t";
    std::cout << "\n";
    //for (auto x: l2) std::cout << x << "\t";

}

template <typename U>
std::array<int, SIZE> insert_sort(std::array<U, SIZE> &l) {
    for (int j = 1; j < l.size(); j++) {
        int key =  l[j];
        int i = j - 1;
        for (auto x: l) std::cout << x << "\t";
            std::cout << "\n";
        while (i > -1 && l[i] > key) {
            l[i+1] = l[i];
            i -= 1;
        }
        l[i+1] = key;
    }
    return l;
}