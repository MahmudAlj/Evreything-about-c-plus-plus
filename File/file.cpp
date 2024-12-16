#include <iostream>
#include <fstream>



int main(){
    // std::ofstream oMyFile("benimo.txt"); // output file  write
    // std::ifstream iMyFile("benimi.txt"); // input file   read
    
    // iMyFile << "benim seni cok seviyorumfdsfsdfsdf fdsfsdksdjfsjebfkjdkfsdf"; // dosyanın icine yazma
    // oMyFile << "ljsdkjfldjfkjdljfksjflkdjflkjdkljdjf";
  
    // std::ifstream in_file{"C:\Users\aljma\Documents\GitHub\Evreything-about-c-\File/benimo.txt", std::ios::in};
    // std::fstream in_file2{"benimo.txt", std::ios::in | std::ios::binary};
    //is_open
    //close

std::ifstream my_file;
my_file.open("C:\\Users\\aljma\\Documents\\GitHub\\Evreything-about-c-\\File\\benim.txt");

std::string line;
if(my_file.is_open()){
    std::cerr << "your good " << std::endl;
    return 0;
}else{
    std::cerr << "is not opening" << std::endl;
    return 1;
}

my_file >> line;

    return 0;  
}



/*
std::ios_base::out      = dosya yazmaya acik 
std::ios_base::in       = dosya okunmaya acik 
std::ios_base::binary   = dosya icerikleri metin yerine ikili veri olarak ele alimnir
std::ios_base::ate      = dosya  dosyanin sonunda dosaya isaretcisi olarak sekilde acilir
std::ios_base::app      = yeni veriler her zaman dosaynin sonuna yazilir
std::ios_base::trunc    = dosyanin icerigi dosya acildiginda hemen silinir 

is_open()               = dosya aciksa true degeri dondurur
close()                 = dosya kapaliysa false degeri dondurur

pubseekpos(position, pointer)
    std::ios_base::out  = okuma isaretcisini hareket ettirin
    std::ios_base::in   = yazma isaretcisini hareket ettirin
pubseekoff(offset, origin, pointer)
    std::ios_base::beg  = dosyanin baslangicina gore ofset
    std::ios_base::cur  = gecerli dosya isaretcisi konumuna gore ofset
    std::ios_base::end  = dosyanin sonuna gore ofset

in_avail()              = dosyada  okunabilecek karakter sayisini dondurur
snextc()                = dosya isaretcisini bir karakter ileri tasir ve yeni konumdaki karakterin ascii degerini dondurur
sbumpc()                = gecerli konumdaki karaktern ascii degerini dondurur ve dosya isaretcisini bir karakter ileri tasir
sgetc()                 = gecerli konumdaki karakterin ascii degerini dondurur ve dosya isaretcisini bir karkater ileri tasir
sgetn()                 = Yöntem dosyadan n karakter okur ve bunları hedef parametresi tarafından belirtilen diziye yazar . Bu yöntem okunan karakter sayısını döndürür.sgetn(destination, n)char
sputc()                 = Yöntem sputc()geçerli konuma bir karakter yazar ve ardından dosya işaretçisini bir karakter ileri taşır. Bu yöntem yazılan karakterin ASCII değerini döndürür.
sputn()                 = Yöntem , kaynak parametresi tarafından belirtilen diziden n karakteri dosyaya yazar . Dosya işaretçisi n karakter ileri taşınır. Bu yöntem, dosyaya yazılan karakter sayısını döndürür.sputn(source, n)char

std::fstream MyFile("dosya akisi")
seekg(position)         = okunan dosya isaretcisi dosyanin baslangicina gore belirtilen bir konuma tasir 
seekg(position, origin) = okuma dosyasi isaretcisini bir kokene gore dosyada belirtilen bir konuma tasir kokenin uc olası degerı vardir 
    std::fstream::beg   = konum dosyanin baslangicina goredir
    std::fstream::cur   = konum gecerli dosya konumuna goredir
    std::fstream::end   = pozisyon dosyanin sonuna goredir
tellg()                 = dosyadaki dosya isaretcisinin gecerkş konumuna dondurur
seekp(position)         = yazma dosyasi isaretcisini dosyanin baslangicina gore belirtilen bşr konuma tasir 
sekkp(position, origin) = yazma dosyanin isaretcisini bir kokene gore dosyada belirtilen bir konuma tasir kokenin uc olasi degeri vardir 
    std::fstream::beg   = konum dosyanin baslangicina goredir
    std::fstream::cur   = konum gecerli dosya konumuna goredir
    std::fstream::end   = pozisyon dosyanin sonuna goredir
tellp()                 = dosyadaki yazma dosyasi isaretcisinin gecerli konumunu dondurur

dosya okum 
get()                   = bir dosyadan tek bir karakter okur ve ASCII değerini bir intdeğer olarak döndürür. Karakteri görmek için onu bir türe dönüştürün char. Dosya işaretçisi dosyadaki bir sonraki karaktere taşınır.


*/