#include <iostream>
#include <vector>
#include <string>

void bos(){
    std::cout << std::endl;
}

int main(){

std::vector<std::string> names = {"mahmud", "sinem", "zeynep", "musti"}; // tek boyutlu bır vector olusturur
for(auto i : names){ // vectoru yazdirir
    std::cout << i << " ";
}
bos();

names.push_back("gokay"); // en son hucereye eleman ekler

for(auto i : names){ // vectoru yazdirir
    std::cout << i << " ";
}

names.pop_back(); // vectorun son elemanını sıler 

for(auto i : names){ // vectoru yazdirir
    std::cout << i << " ";
}



std::vector<std::vector<int>> number1; // iki boyutlu vector tanımlama 
number1 = {{1,2,3,4,5}{2,4,6,8,10}};

sd::
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