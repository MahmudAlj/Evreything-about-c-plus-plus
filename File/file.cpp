#include <iostream>
#include <fstream>



int main(){
    // std::ofstream oMyFile("benimo.txt"); // output file 
    // std::ifstream iMyFile("benimi.txt"); // input file
    
    // iMyFile << "benim seni cok seviyorumfdsfsdfsdf fdsfsdksdjfsjebfkjdkfsdf"; // dosyanın icine yazma
    // oMyFile << "ljsdkjfldjfkjdljfksjflkdjflkjdkljdjf";
  
    std::fstream in_file{"benimo.txt", std::ios::in};
    std::fstream in_file2{"benimo.txt", std::ios::in | std::ios::binary};
    return 0;  
}