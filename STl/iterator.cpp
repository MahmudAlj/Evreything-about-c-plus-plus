#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <set>
#include <deque>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <forward_list>

// iterator dongu ıcın kullanılan bır pointer 
int main(){

std::list<int> mylist{ 2,3,8,7,1,5,9,6,4,10};

for(std::list<int>::iterator itt = mylist.begin(); itt != mylist.end(); itt++){
    std::cout << *itt << " ";
}
std::cout<< std::endl;

auto it = mylist.begin(); // iterator

std::cout << *it << std::endl; // index 0 = 2
std::cout << *it + 1 << std::endl; // index 0 + 1 = 3


std::set<std::string> mystring{"mehmud","mahmud","gokay","sinem"}; 
for(std::set<std::string>::iterator it1 = mystring.begin(); it1 != mystring.end(); it1++){
    std::cout << *it1 << std::endl;
}





 
    return 0;
}


/*
list
set 



*/

