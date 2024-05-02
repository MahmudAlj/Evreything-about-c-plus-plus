#include <iostream>
#include <fstream>
#include <thread>


int main(){
    std::fstream MyFile("benim.txt"); // file belirleme 
    MyFile.open("benim.txt", std::ios::out);
    
    MyFile << "benim seni cok seviyorumfdsfsdfsdf fdsfsdksdjfsjebfkjdkfsdf"; // dosyanın icine yazma
    MyFile << "\n";
    MyFile << "ljsdkjfldjfkjdljfksjflkdjflkjdkljdjf";
  
    
    return 0;
   
}