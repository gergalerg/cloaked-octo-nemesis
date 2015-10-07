#include <iostream>
#include <typeinfo>

template <class... Ts> struct tuple {}; // empty base class

template <class T, class... Ts>
struct tuple<T, Ts...> : tuple<Ts...> {
    tuple(T t, Ts... ts) : tuple<Ts...>(ts...), _tail(t) {}
    T _tail;
};

// access custom tuples.
template <size_t k, class... Ts>
typename std::enable_if<k == 0, typename elem_type_holder<0, tuple<Ts...>>::type&>::type 
get(tuple<Ts...>& t) {
    return t._tail;
}


template <size_t k, class T, class... Ts>
typename std::enable_if<
    k != 0, typename elem_type_holder<k, tuple<T, Ts...>>::type&>::type
get(tuple<T, Ts...& t) {
    tuple<Ts...>& base = t;
    return get<k -1>(base);
}

int main()
{
}

