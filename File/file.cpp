#include <iostream>
#include <fstream>



int main(){
    // std::ofstream oMyFile("benimo.txt"); // output file 
    // std::ifstream iMyFile("benimi.txt"); // input file
    
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