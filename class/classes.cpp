#include <iostream>
#include <string>

//class genel kullanim
class  student  // bir class olusturma baslatma 
{
private: // kapalı value
    /* data */
public: // acik value
     student(/* args */); // class icinde constructor
    ~ student(); // class icinde destructor
};
 student:: student(/* args */) // class disinda constructor 
{ 
}
 student::~ student()  // class disinda destructor 
{
}


//class
 class ornek{
 private: //classın ıcınde kullanıcının degıstmesını yada sabıt kalmasını ıstedıgımız objeler yada fonksıyonlar yer alır (classın dısında degıstırılemez ve kullanılamaz )
  int age; 
 std::string name;
 public: // classın ıcınde kullanıcının degıstırılıp ekledıgı objeler (herkese acık)
  int age2 = 1; 
 std::string name2 = " ";
 ornek(int age2, std::string name2){ //parametrelı constructor ile direkt veri alma
   std::cout << "constructor calisti" << std::endl;
   std::cout << age2 << "  " << name2 << std::endl;
 }
   void al_veri(){
    std::cin >> age;
    std::cin >> name;
   }
   void yazdir(){
   std::cout << age2 << " " << name2 << std::endl;
 }
~ornek(){std::cout << "destructor calisti"<<std::endl;}
 protected: // private ama classın kendısı ve sınıfın alt sınıfları tarafından dogrudan erısılebılır fakat classın dısındakı yapılar tarafından erısım ıznı yoktur
}; 


int main(){
    
ornek bir(18,"code"); // constructor ile direk veri alma 
//bir.age = 18; // hata verir cunku private alanında saklı bır verı 
//bir.name = "mahmud"; // hata verir cunku private alanında saklı bır verı
bir.age2 = 18;  // calısır cuku publicte saklı bır verı(elle verı gırme )
bir.name2 = "mahmud"; // calısır cuku publicte saklı bır verı
bir.al_veri(); //fonksıyon yardımıyla kullanıcı tafından verı almak 
bir.yazdir(); // fonskıyon ıle alınan verı yazdırma


    return 0; // calısan butun destructorlar cagrılır 
}