#include <iostream>
#include <string>
#include <future>

using namespace std;

template <typename Fn, typename... Args>
auto do_async_with_log(ostream& os, Fn&& fn, Args&&... args) ->
            future<decltype(fn(args...))>
            {
                os <<  "{TID=" << this_thread::get_id()
                    << "] Starting to invoke function..." << endl;
                auto bound =  bind(fn, forward<Args&&...>(args...));
                return async([b=move(bound),&os]() mutable {
                    auto result = b();
                    os << "[TID=" << this_thread::get_id()
                        << "]...invocation done, returning " << result << endl;
                });
            }

string sayHello() {
    return "Hello ";
}

int main(){
    string name  = "Greg";
    string *np = &name;
    cout << sayHello() << *np << "\n";
    do_async_with_log("sayHello");


}