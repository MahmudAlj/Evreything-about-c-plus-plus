#include <iostream>
#include <string>
#include <cstring>
#include <new> // placement new kullanmak icin gerekli

union Veri { // union tanımlama 
    int tamSayi; // union obje ozellıklerı 
    float ondalikSayi;
    char karakter;
    int age;
    std::string isim;

};

// Anonim union kullanımları
// Namespace (global) scope'ta
namespace {
    union {
        int g_int;
        char g_char;
    }
    {
        /* data */
    };
    
}

int main() {
    Veri veri;
    veri.tamSayi = 42;
    std::cout << "Tam Sayi: " << veri.tamSayi << std::endl;

    veri.ondalikSayi = 3.14f;
    std::cout << "Ondalik Sayi: " << veri.ondalikSayi << std::endl;

    veri.karakter = 'A';
    std::cout << "Karakter: " << veri.karakter << std::endl;

    std::cin >> veri.age;
    std::cout << "age: " << veri.age << std::endl;

    std::cin.ignore(); // önceki cin'den kalan karakteri temizle
    std::getline(std::cin, veri.isim);
    std::cout << "isim: " << veri.isim << std::endl;


    Veri veri1; // ikici obje olusturma

    std::cin >> veri1.age; // ikinci obje ozellik veri alma
    std::cout << "age: " << veri1.age << std::endl;


    return 0;
} 




#include <iostream>
#include <cstring>
#include <string>
#include <new>   // placement new

// 1) Temel union kullanımı
union SimpleUnion {
    int i;
    float f;
    char c;
};
// Her an sadece bir üyesi "aktif" olur ve tüm üyeler aynı bellek alanını paylaşır.

// 2) Anonim union kullanımları
// 2.a) Namespace (global) scope'ta
namespace {
    union {
        int g_int;
        double g_double;
    }; // isim yok, doğrudan g_int / g_double erişilir
}

// 2.b) Sınıf içinde
struct Point3D {
    union {
        struct { float x, y, z; };
        float coords[3];
    }; // anonymous union → hem x,y,z hem coords ile erişim
};

// 2.c) Fonksiyon içinde
void func() {
    union {
        bool flag;
        uint8_t bits;
    } local;
    local.flag = true;
    std::cout << "bits = " << +local.bits << "\n";
}

// 3) Bit‐field’li union
union BitFieldUnion {
    uint8_t byte;
    struct {
        uint8_t b0:1;
        uint8_t b1:1;
        uint8_t b2:1;
        uint8_t b3:1;
        uint8_t b4:1;
        uint8_t b5:1;
        uint8_t b6:1;
        uint8_t b7:1;
    } bits;
};

// 4) Type‐punning örneği (IEEE‐754 float → int bit kalıbı)
int floatToIntBits(float f) {
    union {
        float f;
        uint32_t i;
    } pun;
    pun.f = f;
    return pun.i;
}

// 5) Non‐trivial tipler C++11+ ile
// std::string gibi destructor/constructor’a sahip tipleri union içinde kullanmak
union StringUnion {
    std::string s;
    int i;
    // C++11’den itibaren, non-trivial member’lı union’larda
    // işaretli "placement new" ve manuel destructor çağırımı gerekir.
    StringUnion() { new(&s) std::string; }   // aktif üye olarak s oluştur
    ~StringUnion() { s.~std::string(); }     // destruction
};

// 6) Basit variant implementasyonu
class MyVariant {
public:
    enum Type { NONE, INT, DOUBLE, STR } type;
    union {
        int i;
        double d;
        std::string s;
    };
    MyVariant() : type(NONE) {}
    ~MyVariant() { reset(); }

    void setInt(int v)    { reset(); type = INT;   i = v; }
    void setDouble(double v) { reset(); type = DOUBLE; d = v; }
    void setString(const std::string& v) {
        reset();
        type = STR;
        new(&s) std::string(v);
    }

    void reset() {
        if (type == STR) s.~basic_string();
        type = NONE;
    }

    void print() const {
        switch(type) {
            case INT:    std::cout << "int: "    << i << "\n"; break;
            case DOUBLE: std::cout << "double: " << d << "\n"; break;
            case STR:    std::cout << "string: " << s << "\n"; break;
            default:     std::cout << "empty\n";               break;
        }
    }
};

// 7) Kullanım örnekleri
int main() {
    // 1) Temel union
    SimpleUnion su;
    su.i = 42;
    std::cout << "su.i = " << su.i << ", su.f = " << su.f << "\n";

    // 2) Anonim union
    g_int = 10;
    std::cout << "global g_double (şimdi g_int atadık) = " << g_double << "\n";

    Point3D p;
    p.x = 1.0f; p.y = 2.0f; p.z = 3.0f;
    std::cout << "p.coords = [" 
              << p.coords[0] << ", " 
              << p.coords[1] << ", " 
              << p.coords[2] << "]\n";

    func();

    // 3) Bit‐field
    BitFieldUnion bfu;
    bfu.byte = 0xAB; // 1010 1011
    std::cout << "bfu.bits.b7 b6 b5 b4 = "
              << +bfu.bits.b7 << +bfu.bits.b6
              << +bfu.bits.b5 << +bfu.bits.b4 << "\n";

    // 4) Type punning
    float f = 3.14159f;
    int ibits = floatToIntBits(f);
    std::cout << "floatToIntBits(" << f << ") = 0x" 
              << std::hex << ibits << std::dec << "\n";

    // 5) Non‐trivial tipler
    StringUnion su2;
    su2.s = "Merhaba Union!";
    std::cout << "su2.s = " << su2.s << "\n";
    // destructor main sonunda çağrılacak

    // 6) MyVariant kullanımı
    MyVariant mv;
    mv.print();
    mv.setInt(123);
    mv.print();
    mv.setDouble(4.56);
    mv.print();
    mv.setString("Union ile Variant");
    mv.print();

    return 0;
}
