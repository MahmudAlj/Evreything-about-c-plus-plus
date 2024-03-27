#include <iostream>
struct deneme // bir struct tanımlama 
{
   int age;
   int numb; // objeler ozellikleri
   std::string name;

void yaz(){
    std::cin>> age;
    std::cin >> numb; 
    std::cin >> name;
}
   void print(){
   std::cout <<"isminiz = "<< name << std::endl;
   std::cout <<"yasiniz = " << age << std::endl;
   std::cout <<"numaraniz = "<< numb << std::endl;
   }
};
int main(){

 deneme player1; // struct obje olusturma
 player1.yaz();
 player1.print();




    return 0;
}