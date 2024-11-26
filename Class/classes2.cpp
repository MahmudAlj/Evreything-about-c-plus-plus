#include <iostream>



class ogrenci{

private:
std::string name = "mahmud";
std::string last_name = "code";

public:
std::string okudugu_okul;
std::string okudugu_bolum;
int girdigi_sene;
int aldigi_ders_sayisi;
bool begendinmi;

protected:
int age = 20;
float hight = 1.80;


ogrenci(){
std::cout << "program basladi" << std::endl;
}

bool onaylama(bool begendinmi){
    std::cout << "programi begendinmi " << std::endl;
    std::cin >> begendinmi;
}
~ogrenci(){
    if (begendinmi == 1){
        std::cout << "kusura bakma" << std::endl;
        std::cout << "program bitti " << std::endl;
    }else {
        std::cout << "programi begendine sevindim" << std::endl;
        std::cout << "program bitti " << std::endl;
    }
    
}

};
int main(){



    return 0;
}