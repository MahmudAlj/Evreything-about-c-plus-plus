#include <iostream>
#include <string>

static const long long int ana_konum = 100000000;
static int okul_sayisi = 0;
static int ogrenci_sayisi = 0;


class Ogrenci{
protected:
    int age = 20;
    double hight = 1.80;

private:
    std::string name = "mahmud";
    std::string last_name = "code";

public:
    std::string okudugu_okul;
    std::string okudugu_bolum;
    int girdigi_sene;
    int aldigi_ders_sayisi;
    long long int konum;
    

    Ogrenci(){
        std::cout << "Ogrenci basladi" << std::endl;
        ogrenci_sayisi++;
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
        std::cout << "kaldigi konum nedir " << std::endl;
        std::cin >> konum;
         
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
        std::cout << " kaldigin konum = " << konum << std::endl;
        std::cout << " simdiye kadar bu kadar ogrenci basvurdu = " << ogrenci_sayisi << std::endl;
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

    ~Ogrenci(){
    std::cout << "destruct calisti" << std::endl;
    }
};


class Universite{
    protected:
       
    private:
        long int konum = ana_konum + 1;
        
    public:
        int yapim_yili;
        std::string okul_name;
        int ogrenci_sayisi;
        int bina_sayisi;
        int fakulte_sayisi;
        int bolum_sayisi;
        int kutuphane_sayisi;
        int yemekhane_sayisi;

    Universite(){
        std::cout << "class basladi " << std::endl;
        okul_sayisi++;
    }

    void veri_al(){ // switch case ile yapilcak 
        std::cout << " merhaba bana universite bilgilerini ver " << std::endl;
        std::cout << " universitenin yapim yili kac " << std::endl;
        std::cin >> yapim_yili;
        std::cout << " okulun adi ne " << std::endl;
        std::getline(std::cin, okul_name);
        std::cout << "ogrenci sayisini gir " << std::endl;
        std::cin >> ogrenci_sayisi;
        std::cout << " bina sayisini gir " << std::endl;
        std::cin >> bina_sayisi;
        std::cout << " fakulte sayisini gir " << std::endl;
        std::cin >> fakulte_sayisi;
        std::cout << " bolum sayisini gir " << std::endl;
        std::cin >> bolum_sayisi; 
        std::cout << " kutuphane ve yemekhane sayilarini gir " << std::endl; 
        std::cin >> kutuphane_sayisi, yemekhane_sayisi;
    }

    void bilgiler_yaz(){
        std::cout << okul_name << yapim_yili << " yilinda yapildi " << std::endl;
        std::cout << ogrenci_sayisi << " okuyan kisi vardir " << std::endl;
        std::cout << bina_sayisi << " bina vardir" << std::endl;
        std::cout << fakulte_sayisi << " fakulte vardir" << std::endl;
        std::cout << bolum_sayisi << " bolum vardir" << std::endl;
        std::cout << kutuphane_sayisi << " calisma alani vardir " << std::endl;
        std::cout << yemekhane_sayisi << " yemekhane vardir " << std::endl;

    }
    ~Universite(){
        std::cout << "coddan cikildi " << std::endl;
    }
};

// bu alınan bilgiler 
int main(){

Ogrenci benim;
benim.bilgi_al();
benim.bilgileri_dogrula();
benim.onaylama();
std::cin.ignore();

Ogrenci benim2;
benim2.bilgi_al();
benim2.bilgileri_dogrula();
benim2.onaylama();
std::cin.ignore();

Universite bu1;
bu1.veri_al();
bu1.bilgiler_yaz();






    return 0;
}