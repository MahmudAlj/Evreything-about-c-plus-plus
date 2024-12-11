#include <iostream> 
#include <vector>
#include <string>


int main() {

  // Vector
std::vector<int> number; // tek boyutlu vector tanımlama 
   number = {1,2,3,4,5,6,7,8,9};
// std::vector<std::vector<int>> number1; // iki boyutlu vector tanımlama 
//    number1 = {{1,2,3,4,5}{2,4,6,8,10}};
std::vector<int> myVector = {1,2,3,4,5,6,7,8,9};

myVector.push_back(6); // işlevi ile yeni elemanlar vektöre eklenir:
myVector.pop_back(); // işlevi ile son elemanı siler

int value1 = myVector[0];    // İlk eleman
int value2 = myVector.at(2); // Üçüncü eleman  işlevleri ile vektörün belirli bir elemanına erişebilirsiniz:
for (auto it = number.begin(); it != number.end(); ++it) { // begin ve end ile number vectorunu yazdirma
    std::cout << *it << std::endl;
}
int size = myVector.size(); //Vektörün boyutunu size() işlevi ile öğrenebilirsiniz:
int capacity = myVector.capacity(); //Vektörün kapasitesini capacity() işlevi ile öğrenebilirsiniz:
myVector.clear(); // Vektörü temizler (elemanları siler)
myVector.assign(5, 42); // Tüm elemanları 42 ile doldurur Vektörün boyutunu değiştirmeden tüm elemanlarını belirli bir değerle doldurmak için assign() işlevini kullanabilirsiniz:
//Diğer İşlevler: std::vector'ün diğer birçok işlevi bulunur, örneğin insert(), erase(), resize(), swap(), emplace_back(), ve daha fazlası. İhtiyacınıza göre belirli işlemleri gerçekleştirmek için bu işlevleri kullanabilirsiniz.



    system("");
}
//metods
/*
vector::assign
vector::at
vector::back
vector::begin
vector::capacity
vector::cbegin
vector::cend
vector::clear
vector::crbegin
vector::crend
vector::data
vector::emplace
vector::emplace_back
vector::empty
vector::end
vector::erase
vector::front
vector::get_allocator
vector::insert
vector::max_size
vector::operator[]
vector::operator=
vector::pop_back
vector::push_back
vector::rbegin
vector::rend
vector::reserve
vector::resize
vector::shrink_to_fit
vector::size
vector::swap

*/