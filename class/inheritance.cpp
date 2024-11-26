#include <iostream>
#include <string>

//class inheritance
class animal{ // temel class (base class) ozellıklerı ve ıslevsellıgı mıras bırakılan sınıfrtır    
    public:
    int age;
    std::string name; 
    std::string name1;
    int age1;
    int boy = 10; 
animal(){   //  default constructor kullanımındır 
    std::cout << "constructor "<< std::endl;
}
animal(std::string name1, int age1){ // value constructor kullanımıdır
    std::cin >> name1;
    std::cin >> age1;
}
    void print(){
        std::cin >> age;
        std::cin >> name;
    } 
    void ok(){
        std::cout << age << std::endl;
        std::cout << name << std::endl;
        std::cout << age1 << std::endl;
        std::cout << name1 << std::endl;
    }
    ~animal(){ // destructor kullaımıdır
      std::cout << "destructor " << std::endl;
}
};
class cins: public animal{ // alt class (derived class) temel sınıfıtan mıras alır ve temek sınıfın ozellıklerını kullanır veya bunları genısletır 
    public:
    int free;
 void Havla() {
        std::cout << "Hav hav!" << std::endl;
    } 
    cins(): free(0){ // constructor initialization list kullanımıdır 
     std::cout <<"parametreli constructor" << std::endl;
     std::cin >> free;  
    }                        
};
class sc: public animal{ // alt class (derived class) temel sınıfıtan mıras alır ve temek sınıfın ozellıklerını kullanır veya bunları genısletır 
    public:
    void tamam(){
        std::cout << "okey"<< std::endl;
    }
};



// abstract
// //1 base class
// //2 derived class
// //ile opeartor overloading toplama islemi ile iki objenın value toplamı
class hayvan{ // Base class
public:
    int yas;
    int omur;
    hayvan(int y, int o) : yas(y), omur(o) {} // constructor initialization list
    void yazdir() {
        std::cout << "yasi = " << yas << std::endl;
        std::cout << "ortalama omur = " << omur << std::endl;
    }
    hayvan operator+(const hayvan& hadi) {
        return hayvan(yas + hadi.yas, omur + hadi.omur);
    }
 void yazdirto(){
 std::cout << "yasi toplam = " << yas << std::endl;
        std::cout << " omur toplam = " << omur << std::endl;
 }
    ~hayvan() {}
};
class kurt : public hayvan { // Derived class
public:
    std::string cins;
    int kacgezer;
    int kacayak;
    kurt(int a, int m, std::string l, int kac, int aya) : hayvan(a, m), cins(l), kacgezer(kac), kacayak(aya) {  //constructor initialization list ve onu default constructor kullanımı
        std::cout << "kurtlar vadisi" << std::endl; // base classta bir /constructor initialization list kullanılyosa onun elemanlarını alt sıniflardada kullanılması gerekyo
        std::cout << "kurtlar vadisi" << std::endl;
    }
    // kurt operator-(const kurt& hadi1){ // derived classta bir operator overloading denedim ama hata verdı 
    //     return kurt(kacgezer - hadi1.kacgezer, kacayak - hadi1.kacayak);
    // }
};
class aslan : public hayvan { // Derived class
public:
std::string cinsi;
   aslan(int s, int u, std::string k) : hayvan(s, u), cinsi(k) { //constructor initialization list ve onu default constructor kullanımı
        std::cout << "kurtlar vadisi" << std::endl;
        std::cout << "aslanlar kalir" << std::endl;
    }
};
class ayi : public hayvan{ // Derived class 
private:
int ayak;
int El;
public: 
    ayi(int o, int aa, int ay, int el) : hayvan(o,aa), ayak(ay), El(el){ //constructor initialization list ve onu default constructor kullanımı
        std::cout << "kurtlar vadisi" << std::endl;
        std::cout << "buzlugun kirali " << std::endl;
    }
};

int main(){


  kurt h1( 10,20 ,"ne",19,4); // constructor yoluyla obje value verme 
    h1.yazdir();

    aslan h2(12,15,"wabwe"); // constructor yoluyla obje value verme 
    h2.yazdir();

    hayvan h3 = h1 + h2; // operator overloading ile iki obje value degerlerının bir baska obje ye atama 
    h3.yazdirto();

    ayi h4(30,100,2,2); // constructor yoluyla obje value verme 
    h4.yazdir();

    hayvan h5 = h4 + h3; // operator overloading ile iki objenın value degerlerını bir baska objeye atama
    h5.yazdirto();

cins kopek; // alt sınıf ıle obje olusur ve kullanılır  
kopek.print(); // alt sınıfın verılerı ve metotları olmadıgı halde kullanmaya ızın verılır
kopek.Havla();
kopek.ok();

sc kopek1; //  ikinci alt sınıf ıle obje olusur ve kullanılır 
kopek1.print(); //  ikinci alt sınıfın verılerı ve metotları olmadıgı halde kullanmaya ızın verılır
kopek1.ok();
kopek1.tamam();
    
    return true;
}