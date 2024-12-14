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


*/