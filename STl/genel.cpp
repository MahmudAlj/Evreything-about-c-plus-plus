#include  <iostream>

#define my_age 19
#define my_weight 78
#define MAX(a,b) ((a > b) ? a : b)

template <typename T> 
T MIN(T a,T b){
    return ((a < b) ? a : b);
}




int main(){

int a = 10;
int b = 20;

std::cout << MAX(a,b);
std::cout << MIN(a,b);



    return 0;
}