
#include <vector>
#include <memory>
#include <iostream>
#include <algorithm>
#include <list>
#include <random>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>

// using namespace std::ranges;
int main()
{

   // std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

   // auto lambda = [v]() {

   //     for(auto el : v ) {
   //         std::cout<<el<<", ";
   //         }
   //     };
   //     lambda();

   //     auto lambda2 = [](int el) { std::cout<<el<<", ";};
   //     std::for_each(begin(v), end(v),lambda2);

   // std::vector<int> vec = {8,2,5,3,4,4,2,7,6,6,1,8,9};

   // int counter = std::count_if(vec.begin(), vec.end(), [](int el){ return el >= 5;});

   // std::cout << "numbers greater than five : " << counter << '\n';

   // // auto result = std::find_if(vec.begin(), vec.end(), [](auto x){ return x < 2;});

   // // (result != std::end(vec)) ? std::cout<<"there is number smaller than 1 \n" : std::cout<<"there is not number smaller than 1\n";

   // std::cout<<std::boolalpha <<std::any_of(begin(vec), end(vec), [](auto x){return x < 1;})<<"\n";
   // std::cout<<std::boolalpha <<std::all_of(vec.begin(), vec.end(), [](int el){ return el > 1;})<<"\n";

   // if(std::all_of(vec.begin(), vec.end(), [](int el){ return el > 1;}))
   // {
   //      std::cout << "All numbers are greater than 1\n";
   // }
   // else{std::cout << "All numbers are not greater than 1\n"; }

   // std::cout<<std::ranges::count_if(vec,[](int el){ return el >= 5;});

   //Znajdź wszystkie elementy większe od 6 i wypisz je

   //     std::vector<int> v = {8, 2, 5, 3, 4, 4, 2, 7, 6, 6, 1, 8, 9};

   //     auto it = std::find_if(v.begin(), v.end(), [](auto x){return x > 6;});
   //     while(it != v.end())
   //     {
   //         std::cout<<*it<<" ";
   //         it = std::find_if(std::next(it), v.end(), [](auto x){return x > 6;});
   //     }
   // std::cout<<"\n";
   // //Znajdź wszystkie elementy równe 2, 4, 6 lub 8 i wypisz je
   // std::cout<<"drugi task\n";
   //    auto it3 = std::find_if(v.begin(), v.end(), [](auto x){return ((x == 6) || (x ==2) || (x==4) || (x==8));});
   //     while(it3 != v.end())
   //     {
   //         std::cout<<*it3<<" ";
   //         it3 = std::find_if(std::next(it3), v.end(), [](auto x){return ((x == 6) || (x ==2) || (x==4) || (x==8));});
   //     }
   // std::cout<<"\n";
   // std::vector<int> a {6,6};
   // //Przeszukaj wektor v w poszukiwaniu zakresów {6, 6} i {7, 7}
   // auto it2 = std::search(v.begin(), v.end(), a.begin(), a.end());
   // if(it2 != v.end())
   // {
   //     std::cout<<"ok jest ciag";
   // }
   // std::cout<<"\nSearch_n\n";
   // it = std::search_n(v.begin(), v.end(),2,7);
   // if(it != v.end())
   // {
   //     std::cout<<*it;
   //     it++;
   //     std::cout<<*it;
   // }
   // auto il = std::adjacent_find(v.begin(), v.end());
   // if(il == v.end()) {
   //      std::cout << "no matching adjacent elements\n";
   // }
   //  else {
   //         std::cout << "the first adjacent pair of equal elements at: "<<std::distance(v.begin(), il) << '\n';
   // }

   // std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8};
   // std::list<int> list {10, 20, 30 , 40 , 50, 60, 70, 80};
   // std::transform(begin(vec),
   //                end(vec),
   //                begin(list),
   //                begin(vec),
   //                [](auto first, auto second) {
   //                    return first + second;
   //                });
   // // vec = {11, 22, 33, 44, 55, 66, 77, 88}

   // //std::transform

   // std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8};
   // std::list<int> list {10, 20, 30 , 40 , 50, 60, 70, 80};
   // std::transform(begin(vec),
   //                end(vec),
   //                begin(list),
   //                begin(vec),
   //                [](auto first, auto second) {
   //                    return first + second;
   //                });
   // // vec = {11, 22, 33, 44, 55, 66, 77, 88}

   // //std::generate*

   // // std::vector<int> vec(10);
   // // std::generate(begin(vec), end(vec), [i{0}]() mutable { return i++; });
   // // // vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

   // // std::mt19937 rng;
   // // std::generate_n(std::ostream_iterator<std::mt19937::result_type>(std::cout, " "),
   // //                 5,
   // //                 std::ref(rng));
   // // Possible output: 3499211612 581869302 3890346734 3586334585 545404204

   std::vector<std::pair<int, std::string>> vec{
       {0, "Zero"}, {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}};
   std::vector<int> vec1{1, 2, 3, 4, 5, 6, 7, 8};
   std::vector<int> to_fill(5);
   std::vector<int> ordinals;

   std::transform(begin(vec),
                  end(vec),
                  std::back_inserter(ordinals), [](auto first)
                  { return first.first; });

   for (auto el : ordinals)
   {
      std::cout << el << ", ";
   }

   std::vector<std::string> v3;
   std::transform(begin(vec),
                  end(vec),
                  std::back_inserter(v3), [](auto first)
                  { return first.second + ":" + std::to_string(first.first); });

   for (auto el : v3)
   {
      std::cout << el << ", ";
   }
   constexpr auto size = 13;

   std::vector<int> v4(size);

   std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
std::generate_n(v4.begin(), size,[c = 'a' - 2 ] () mutable {
     c +=2;return c;});

for (auto& el : v4)
{
   std::cout << char(el) << ", ";
}
//     };
//     };
}