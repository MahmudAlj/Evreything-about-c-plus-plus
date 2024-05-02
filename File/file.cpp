#include <iostream>
#include <fstream>



int main(){
    std::ofstream oMyFile("benimo.txt"); // output file 
    std::ifstream iMyFile("benimi.txt"); //  input file
    
    iMyFile << "benim seni cok seviyorumfdsfsdfsdf fdsfsdksdjfsjebfkjdkfsdf"; // dosyanın icine yazma
    oMyFile << "ljsdkjfldjfkjdljfksjflkdjflkjdkljdjf";
  
    
    return 0;  
}