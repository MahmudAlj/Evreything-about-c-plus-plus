#include <iostream>

//constructor
 class benim{
private:
int run;
int sac;
public:
int mat;
std::string name;
int age;
void al(){
    std::cout << "veri gir " << std::endl;
    std::cin>> name;
    std::cout << "veri gir " << std::endl;
    std::cin>> age;
    mat++;
}
static void ben(){ // default bir static fonksıyon tanımlama 
    std::cout << "merhaba ben static bir fonksiyonum" << std::endl;
}
static void kisi(benim& b) { // parametrelı(icine parametre gırcek olan) Statik fonksiyonun bağlı olduğu nesneye erişmek için bir referans kullanmalısınız
        std::cout << "veri gir " << std::endl;
        std::cin >> b.run;
        std::cout << "veri gir " << std::endl;
        std::cin >> b.sac;
    }
};

//default constructor
class ExampleClass {
public:
    ExampleClass() {
        std::cout << "default constructor tamam." << std::endl;
        age = 0;
        name = "non";
    }
    ExampleClass(int _age, const std::string& _name) {
        std::cout << "Parametreli constructor tamam." << std::endl;
        age = _age;
        name = _name;
    }
    ExampleClass(const std::string& name1, int age1) : age(age1), name(name1) {
        std::cout << "Initialization list ile constructor tamam." << std::endl;
    }
    ~ExampleClass() {
        std::cout << "Destructor tamam. Name: " << name << std::endl;
    }
    void DisplayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
    // Kullanıcıdan girdi almak için kullanılacak işlev
    void GetUserInput() {
        std::cout << "yas gir: ";
        std::cin >> age;
        std::cout << "isim gir: ";
        std::cin>> name;
    }
private:
    int age;
    std::string name;
};

//overloading constructor
class Len {
public:
    int age;
    int free;
    std::string name;
    // Default constructor
    Len(){
        age = 0;
        free = 0;
        name = "bos";
        std::cout << "bos constructor" << std::endl;
    }
    // Veri alan constructor
    Len(int n){
          age = n;
          free = 0;
          name = "bos";
     std::cin >> age;
     }
    // baska Veri ile işlem yapan constructor 
    Len(int n, int l){
        age = n;
        free = l;
        name = "bos";
        std::cin >> age;
   std::cin >> free;
    std::cout << age + free;
    }
    //baska String değer alıp yazdıran constructor
    Len(std::string name1){
        age = 0;
        free = 0;
        name = name1;
    std::cout << "pls enter your name" << std::endl;
    std::cin >> name;
    std::cout << "hello " << name << std::endl;}
    void merhaba() {
        std::cout << "Merhaba" << std::endl;
    }
};
int main(){

benim kasi;
kasi.al();
kasi.kisi(kasi); //parametreli bir static fonksıyon cagırma
benim::ben(); // default bir static fonksıyon cagırma 


    Len ne; //default constructor
    Len ne2(10); // overload constructor 1
    Len ne3(20,30); // overload constructor 2
    Len ne4("mahmud"); // overload constructor 3
    ne.merhaba();


    return 0;
}