#include <iostream>
#include <string>

class Makine {
public:
    int uretim_yeri = 0;
    std::string is_yeri;
    std::string kisa_tanim;
    int maliyet_hsp_no = 0;
    int isyeri_turu = 0;
    int plan_kullanimi = 0;

    Makine() {
        std::cout << "hello you are in the " << uretim_yeri << std::endl;
    }
};

int main() {
    Makine makine;
    return 0;
}
