// #include <iostream>
// #include <stdexcept>
// //catch 
// //throw 
// //try
// int main(){

//     return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main()
// {
//    try {
//        throw 'X';
//    }
//    catch (const int &ex)
//    {
//       cout << "Integer exception" << endl;
//    }
//    catch (...)
//    {
//       cout << "Any exception" << endl;
//    }
//    cout << "Goodbye" << endl;
//    return 0;
// }  

// #include <iostream>
// void func_a();
// void func_b();
// void func_c();
 
// void func_a() {
//     std::cout << "Starting func_a" << std::endl;
//     func_b();
//     throw 3000;
//     std::cout << "Ending func_a" << std::endl;
// }
 
// void func_b() {
//     std::cout << "Starting func_b" << std::endl;
//     func_c();
//     throw 2000;
//     std::cout << "Ending func_b" << std::endl;
// }
 
// void func_c()  {
//     std::cout << "Starting func_c" << std::endl;
//     throw 1000;
//     std::cout << "Ending func_c" << std::endl; 
// }
 
// int main() {    
//     try {
//         func_a();
//     } catch(int &ex) {
//         std::cerr << "Caught error thrown: " << ex << std::endl;
//     }
//     std::cout << "Continuing in main" << std::endl;
//     return 0;
// }


#include <iostream>
#include <exception>
  
// this function only knows how to double values
// that are less than 5000
 
int double_it(int val) {
   if (val >= 5000)
      throw std::exception();
   return val * 2;
 }
 
int main() {
   try {
      int *values = new int[10000];
      for (int i=0; i< 10000; ++i)
         values[i] = double_it(i); // double_it may throw a std::exception
      delete [] values;
 
   }
   catch (const std::exception &ex) {
      std::cerr << "Don't know how to double numbers > 5000" << std::endl;
   }
 
   std::cout << "Program complete" << std::endl;
   return 0;
}