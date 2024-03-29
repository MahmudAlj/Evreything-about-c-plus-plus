#include <iostream>    
#include "my_algorithm.h"

int main() {
    
    algo::fora(8,10);
    std::cout << " " << std::endl;
    algo::whilea(6,10);
    std::cout << std::endl;
    algo::ifastring("mahmud","mahmud","bu dogru","bu yanlis");
    algo::ifainteger(12,2,"bu dogru","bu yanlis");
    return 0;
}