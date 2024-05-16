#include <iostream>    
#include "my_algorithm.h"
#include "calculat.cpp"

int main() {
    std::cout << plus(1,2) << std::endl;

    algo::fora(8,10);
    std::cout << " " << std::endl;
    algo::whilea(6,10);
    std::cout << std::endl;
    algo::ifastring("mahmud","mahmud","bu dogru","bu yanlis");
    algo::ifainteger(12,2,"bu dogru","bu yanlis");
    return 0;
}