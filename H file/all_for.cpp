#include <iostream>

int main(){
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

for(int i = aylar: m){
    std::cout << m << " ";
}



    return 0;
}