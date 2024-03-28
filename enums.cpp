#include <iostream>
// state 
// underlying_type_t<>use_type

  enum aylar{ //eskesmis adlandirilmisi tamsayi sabitlerinden olusan bir veri turudur
        ocak = 1, //normalde 0 dan baslar ama burda 1 den baslatılmıs
        subat,
        mart,
        nisan,
        mayis,
        hazeran,
        temmuz,
        agustus,
        eylul,
        ekim,
        kasim,
        aralik
    };


int main(){
enum color{red,blue,green,black}; // enum list ornegidir
color my = red;
my = 10;
std::cout<< my << std::endl;


aylar ay = kasim; // burda bır degıskene kasım ayı yanı [11] atanmıstır
std::cout << ay;


    return 0;
}