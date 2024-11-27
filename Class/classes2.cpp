#include <iostream>
#include <string>


class ogrenci{
    protected:
    int age = 20;
    float hight = 1.80f;

private:
    std::string name = "mahmud";
    std::string last_name = "code";

public:
    std::string okudugu_okul;
    std::string okudugu_bolum;
    int girdigi_sene;
    int aldigi_ders_sayisi;
  

    ogrenci(){
        std::cout << "program basladi" << std::endl;
    }


    void  bilgi_al(){
        std::cout << "merhaba bana bilgilerini ver " << std::endl;
        std::cout << "okudugun okulu yazarmsin " << std::endl;
        std::getline(std::cin, okudugu_okul);
        std::cout << "okudugun bolumu yazarmisin " << std::endl;
        std::getline(std::cin, okudugu_bolum);
        std::cout << "giridigin seneyi girermisin " << std::endl;
        std::cin >> girdigi_sene;
        std::cout << "aldigin ders sayisini yazarmisin " << std::endl;
        std::cin >> aldigi_ders_sayisi;
         
    }

    void bilgileri_dogrula(){
        std::cout << " senin adin =" << name << std::endl;
        std::cout << " senin soyadin = " << last_name << std::endl;
        std::cout << " senin yasin = " << age << std::endl;
        std::cout << " senin boyun = " << hight << std::endl;

        std::cout << " senin okudugun okul = " << okudugu_okul << std::endl;
        std::cout << " senin okudugun bolum = " << okudugu_bolum << std::endl;
        std::cout << " senin girdigin sene = " << girdigi_sene << std::endl;
        std::cout << " senin aldigin ders sayisi = " << aldigi_ders_sayisi  << std::endl;
    }
        bool onaylama(){
        bool begendinmi;
        std::cout << "programi begendinmi " << std::endl;
        std::cin >> begendinmi;
        if (begendinmi == 1){
            std::cout << "kusura bakma" << std::endl;
            std::cout << "program bitti " << std::endl;
        }else {
            std::cout << "programi begendine sevindim" << std::endl;
            std::cout << "program bitti " << std::endl;
        }
        std::cout << "Program bitti" << std::endl;
        return begendinmi;
    }

    ~ogrenci(){
    std::cout << "destruct calisti" << std::endl;
    }

};
int main(){

ogrenci benim;
benim.bilgi_al();
benim.bilgileri_dogrula();
benim.onaylama();
    


    return 0;
}