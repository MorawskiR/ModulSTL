
#include <vector>
#include <memory>
#include <iostream>
#include <algorithm>


int main()
{


std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

auto lambda = [v]() {

    for(auto el : v ) {
        std::cout<<el<<", ";
        }
    };
    lambda();


    auto lambda2 = [](int el) { std::cout<<el<<", ";};
    std::for_each(begin(v), end(v),lambda2);

}