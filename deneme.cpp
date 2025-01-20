#include <iostream>
#include <string>

// /// @brief 
// class evrey {
// private:
//     int real;
//     int imag;
//     static int kisiler; //static bir degısken tanımlama 
// public:
   
//   // operator overloading
//     evrey(int r, int i) : real(r), imag(i) {}  // constructor ıle verı alma 
//     evrey operator+(const evrey& other) { // + toplama operator ve ıslem tanımlama 
//         return evrey(real + other.real, imag + other.imag);
//     }
//     bool operator==(const evrey& other) { // == karsılastırma operatoru ve islem tanımlama 
//         return (real == other.real) && (imag == other.imag);
//     }
//     void kisi(){
//         kisiler++; // kayıt olan kısı sayısı hesaplayan (static)
//         std::cout << "kisi sayisi = "<< kisiler << std::endl;
//     }
// };

// int evrey::kisiler = 0; //static degısken baslatma 

// int main() {
//     evrey a(3, 4); // birinci obje cagırma 
//     evrey b(3, 4); // ikindci obje cagırma 

//     evrey c = a + b; // + operatörünü kullanarak iki evrey nesnesini topla
//     if (a == b) {      // == operatörünü kullanarak iki evrey nesnesini karşılaştır
//         std::cout << "a ve b aynidir." << std::endl;
//     } else {
//         std::cout << "a ve b farklidir." << std::endl;
//     }
//     a.kisi(); // cagırılan kısı sayısı yazdıran metot cagırma 
//     b.kisi();// cagırılan kısı sayısı yazdıran metot cagırma 
//     c.kisi();// cagırılan kısı sayısı yazdıran metot cagırma 
   
//     return 0;
//}



int main(){
int a = 7;
int b = 12;
std::cout << 23%--a + b++/-3-8;


    return 0;

}