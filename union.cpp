#include <iostream>
#include <string>

union Veri { // union tanımlama 
    int tamSayi; // union obje ozellıklerı 
    float ondalikSayi;
    char karakter;
    int age;
void ben(){
    tamSayi = 0;
}
};
//#include <string> tanımladıgım halde std::string bir degısken olusturamadım 
int main() {
    Veri veri; // union obje olursturma 

    veri.tamSayi = 42; // obje ozellık atama 
    std::cout << "Tam Sayi: " << veri.tamSayi << std::endl; // obje yazdirma 

    veri.ondalikSayi = 3.14f;
    std::cout << "Ondalik Sayi: " << veri.ondalikSayi << std::endl;

    veri.karakter = 'A';
    std::cout << "Karakter: " << veri.karakter << std::endl;

    std::cin >> veri.age; // obje icin veri alma 
    std::cout << "age: " << veri.age << std::endl;
  
  
  
    Veri veri1; // ikici obje olusturma 
   
    std::cin >> veri1.age; // ikinci obje ozellik veri alma 
    std::cout << "age: " << veri1.age << std::endl;


    return 0;
}
