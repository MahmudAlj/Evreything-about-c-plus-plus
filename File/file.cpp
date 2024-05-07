#include <iostream>
#include <fstream>



int main(){
    // std::ofstream oMyFile("benimo.txt"); // output file 
    // std::ifstream iMyFile("benimi.txt"); // input file
    
    // iMyFile << "benim seni cok seviyorumfdsfsdfsdf fdsfsdksdjfsjebfkjdkfsdf"; // dosyanın icine yazma
    // oMyFile << "ljsdkjfldjfkjdljfksjflkdjflkjdkljdjf";
  
    std::ifstream in_file{"C:\Users\aljma\Documents\GitHub\Evreything-about-c-\File/benimo.txt", std::ios::in};
    std::fstream in_file2{"benimo.txt", std::ios::in | std::ios::binary};
    //is_open
    //in_file.close
    return 0;  
}