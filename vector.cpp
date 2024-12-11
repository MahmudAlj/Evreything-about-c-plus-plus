#include <iostream> 
#include <vector>
#include <string>


int main() {

  // Vector
std::vector<int> number; // tek boyutlu vector tanımlama 
   number = {1,2,3,4,5,6,7,8,9};
// std::vector<std::vector<int>> number1; // iki boyutlu vector tanımlama 
//    number1 = {{1,2,3,4,5}{2,4,6,8,10}};
std::vector<int> myVector = {1,2,3,4,5,6,7,8,9};

myVector.push_back(6); // işlevi ile yeni elemanlar vektöre eklenir:
myVector.pop_back(); // işlevi ile son elemanı siler

int value1 = myVector[0];    // İlk eleman
int value2 = myVector.at(2); // Üçüncü eleman  işlevleri ile vektörün belirli bir elemanına erişebilirsiniz:
for (auto it = number.begin(); it != number.end(); ++it) { // begin ve end ile number vectorunu yazdirma
    std::cout << *it << std::endl;
}
int size = myVector.size(); //Vektörün boyutunu size() işlevi ile öğrenebilirsiniz:
int capacity = myVector.capacity(); //Vektörün kapasitesini capacity() işlevi ile öğrenebilirsiniz:
myVector.clear(); // Vektörü temizler (elemanları siler)
myVector.assign(5, 42); // Tüm elemanları 42 ile doldurur Vektörün boyutunu değiştirmeden tüm elemanlarını belirli bir değerle doldurmak için assign() işlevini kullanabilirsiniz:
//Diğer İşlevler: std::vector'ün diğer birçok işlevi bulunur, örneğin insert(), erase(), resize(), swap(), emplace_back(), ve daha fazlası. İhtiyacınıza göre belirli işlemleri gerçekleştirmek için bu işlevleri kullanabilirsiniz.



    system("");
}
//metods
/*
assign: Belirtilen değerlerle vektörü doldurur.
at: Belirli bir indekste güvenli erişim sağlar (sınır kontrolleriyle).
back: Vektörün son elemanını döndürür.
begin: Vektörün başlangıç iteratorunu döndürür.
capacity: Vektörün şu anda ayırdığı toplam kapasiteyi döndürür.
cbegin: Değiştirilemez başlangıç iteratorunu döndürür.
cend: Değiştirilemez bitiş iteratorunu döndürür.
clear: Vektörün tüm elemanlarını siler.
crbegin: Değiştirilemez ters başlangıç iteratorunu döndürür.
crend: Değiştirilemez ters bitiş iteratorunu döndürür.
data: Vektörün dahili veri göstericisini döndürür.
emplace: Belirtilen konuma bir eleman yerleştirir.
emplace_back: Vektörün sonuna bir eleman yerleştirir.
empty: Vektörün boş olup olmadığını kontrol eder.
end: Vektörün bitiş iteratorunu döndürür.
erase: Belirtilen konumdaki veya aralıktaki elemanları siler.
front: Vektörün ilk elemanını döndürür.
get_allocator: Vektörün bellek tahsisi için kullandığı tahsis ediciyi döndürür.
insert: Belirtilen konuma bir veya birden fazla eleman ekler.
max_size: Vektörün tutabileceği maksimum eleman sayısını döndürür.
operator[]: Belirtilen indekse hızlı erişim sağlar (sınır kontrolleri olmadan).
operator=: Vektöre başka bir vektör veya değer atar.
pop_back: Vektörün son elemanını kaldırır.
push_back: Vektörün sonuna bir eleman ekler.
rbegin: Ters başlangıç iteratorunu döndürür.
rend: Ters bitiş iteratorunu döndürür.
reserve: Belirtilen kapasiteyi ayırır.
resize: Vektörün boyutunu değiştirir.
shrink_to_fit: Kapasiteyi mevcut boyuta indirir.
size: Vektördeki mevcut eleman sayısını döndürür.
swap: İki vektörün içeriğini değiştirir.

*/