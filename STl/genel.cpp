#include <iostream>
#include <list>
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
float c = 9.3;
float d = 34.3;
std::cout << MAX(a,b);
std::cout << MIN(a,b); // <intager>
std::cout << MIN(c,d); // <float> temlate kullanarak hem interger veri tipinden hemde float veri tipinden islem yapan bir fonksıyodan

std::list <int> mylist;

mylist.push_back(10);
mylist.push_back(20);
mylist.push_back(30);
mylist.push_front(40);

for(std::list<int>::iterator it = mylist.begin(); it != mylist.end(); it++){
    std::cout << *it << std::endl;
}


std::list <int> mypopular = {2,3,4,6,3,2,7,8,9,3,5,7,10};
std::list <int> myfirst; // 1,5
std::list <int> mysecond; // 6,10

for (std::list<int>::iterator im = mypopular.begin(); im != mypopular.end(); im++){
    int my = *im;
    if(my <= 5){
        myfirst.push_back(my);
    }else{
        mysecond.push_back(my);
    }
}

for(std::list<int>::iterator it = mypopular.begin(); it != mypopular.end(); it++){
    std::cout << *it << " ";
}
std::cout << std::endl;
for(std::list<int>::iterator it = myfirst.begin(); it != myfirst.end(); it++){
    std::cout << *it << " ";
}
std::cout << std::endl;
for(std::list<int>::iterator it = mysecond.begin(); it != mysecond.end(); it++){
    std::cout << *it << " ";
}
std::cout << std::endl;


    return 0;
}