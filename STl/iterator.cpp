#include <iostream>
#include <list>

int main(){

std::list<int> mylist{ 2,3,8,7,1,5,9,6,4,10};

auto it = mylist.begin();

std::cout << *it << std::endl; // index 0 = 2
std::cout << *it + 1 << std::endl; // index 0 + 1 = 3

    return 0;
}