#include <iostream> 
#include <iomanip> // must include for manipulators

int main(){
// //boolean type  1(true)0(false)

// std::cout << (100 == 100) << std::endl; // 1
// std::cout << (100 == 200) << std::endl; // 0

// std::cout << std::boolalpha;
// std::cout << (100 == 100) << std::endl; // true 
// std::cout << (100 == 200) << std::endl; // false 

// std::cout << std::noboolalpha;
// std::cout << (100 == 100) << std::endl; // 1
// std::cout << (100 == 200) << std::endl; // 0

// //method version 
// std::cout.setf(std::ios::boolalpha);
// std::cout << (100 == 100) << std::endl; // true
// std::cout << (100 == 200) << std::endl; // false

// // reset to default 
// std::cout << std::resetiosflags(std::ios::boolalpha);
// std::cout << (100 == 100) << std::endl; // 1
// std::cout << (100 == 200) << std::endl; // 0
 

// integer type 

// int num = 85;

//setting using the set method
// std::cout.setf(std::ios::uppercase);

// std::cout << std::noshowbase << std::nouppercase;
// std::cout << std::dec << num << std::endl; // 85
// std::cout << std::hex << num << std::endl; // 55
// std::cout << std::oct << num << std::endl; // 125

// std::cout.setf(std::ios::showbase);
// std::cout << std::showbase << std::uppercase;
// std::cout << std::dec << num << std::endl; // 85
// std::cout << std::hex << num << std::endl; // 0X55
// std::cout << std::oct << num << std::endl; // 0125

// int num1 = 12;
// int num2 = -12;

// std::cout << std::noshowpos;
// std::cout << num1 << std::endl; // 12
// std::cout << num2 << std::endl; // -12

// std::cout.setf(std::ios::showpos);
// std::cout << std::showpos;
// std::cout << num1 << std::endl; // +12
// std::cout << num2 << std::endl; // -12

//resetting to defaults
// std::cout << std::resetiosflags(std::ios::basefield);
// std::cout << std::resetiosflags(std::ios::showbase);
// std::cout << std::resetiosflags(std::ios::showpos);
// std::cout << std::resetiosflags(std::ios::uppercase);

//float type 

// double num = 12.34;

// std::cout << num << std::endl;

// std::cout << std::showpoint;
// std::cout << num << std::endl;

// double num1 = 123456789.987654321;

// std::cout << std::setprecision(9);
// std::cout << num1 << std::endl;

// std::cout << std::fixed;
// std::cout << num1 << std::endl;

// std::cout << std::setprecision(4) << std::fixed;
// std::cout << num1 << std::endl;

// std::cout << std::setprecision(3) << std::scientific;
// std::cout << num1 << std::endl;

// std::cout << std::setprecision(3) << std::scientific << std::uppercase;
// std::cout << num1 << std::endl;

// std::cout << std::setprecision(3) << std::fixed << std::showpos;
// std::cout << num1 << std::endl;

//back to defaults
// std::cout.unsetf(std::ios::scientific | std::ios::fixed);
// std::cout << std::resetiosflags(std::ios::showpos);
    
// std::cout << std::setprecision(10) << std::showpoint;
// std::cout << num1 << std::endl;

// std::cout.unsetf(std::ios::scientific | std::ios::fixed);
// std::cout << std::setprecision(6);  
// std::cout << std::resetiosflags(std::ios::showpos);    
// std::cout << std::resetiosflags(std::ios::showpoint);  
    
// std::cout << num1 << std::endl;
    
    return 0;
}