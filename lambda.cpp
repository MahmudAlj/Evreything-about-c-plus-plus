#include <iostream>
#include <functional>

int main(){
   // vectorle kullanısı 
//    // std::function
//    // [] () -> return_type specifiers {};  
//    //[captured_variables] () -> returun_type specifiers { };
// auto l = [] (int x) { std::cout << x << std::endl;};
// auto k = [] (int x, int y) -> int { return x + y;};
// auto j = [] (int x, int y) { return x + y;};


// l(10);
// std::cout << k(40,3) << std::endl;
// std::cout << j(30,2) << std::endl;


// [] () {std::cout << "hello world" << std::endl;};
// int x {10};
// [] (int x) {std::cout << x << std::endl;}(100);

int a = 5;
auto lambda = [a]() mutable { a = 10; return a; };
std::cout << a << " " << lambda() << std::endl;


    return 0;
}