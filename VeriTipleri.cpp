#include <iostream>
#include <cstdlib>
#include <variant>
#include <iostream>


//https://cplusplus.com/doc/tutorial/
using std::string; // using namespace std gibi ama sadece string veri tipine kullanmak istersen boyle kullanılır

typedef int numbers; // assigns a name to a data type, so that name can be used instead of the data type

namespace namek{ // used for defining a function within a namespace
       int add(int a, int b){
              int sum = a + b;
              return sum;
       }
}
namespace namem{ // creates a namespace and whatever code is inside it belongs only to the namem namespace
       std::string fname = "mahmud";
       std::string lname = "code";
       int age = 18;
}
namespace namel{ // creates a second namespace and even though the variables under it have the same names as the previous namespace, there is no error because the variables belong only to the namel namespace
       std::string fname = "len";
       std::string lname = "codee";
       int age = 19;
}

using namespace namek; // used to constantly invoke the add function

// extern name_global;  // used to indicate that global variables or functions are defined in another file

int main(void){
       
       std::variant<int, float, double> ornekvari;
       ornekvari = 10;
       std::cout << "integer: " << std::get<int>(ornekvari) << std::endl;
       ornekvari = 10.5435f;
       std::cout << "float: " << std::get<float>(ornekvari) << std::endl;
       ornekvari = 10342.324324;
       std::cout << "double: " << std::get<double>(ornekvari) << std::endl;



numbers num12 = 12;  // using the name defined by typedef instead of int (numbers)
std::cout << num12;
int age; // used to define an integer variable
age = 18;

double weight; // used to define large decimal numbers
weight = 75.423;

float length; // used to define small decimal numbers
length = 1.81;

char alpha; // used to define characters
alpha = 'M';

auto  step = "first"; // used to define a variable automatically

bool left; // used for logical variables (true / false)
left = true;

bool right; // used for logical variables (true / false)
right = false;

size_t age2; // commonly used to represent sizes such as memory sizes and array sizes, starting from zero or larger values
age2 = 19;

string name; // used to define string variables
name = "Mahmud";

std::cout << "data types" << std::endl;
std::cout << "integer = " << age <<  std::endl;
std::cout << "double = " << weight <<  std::endl;
std::cout << "float = " << length <<  std::endl;
std::cout << "character = " << alpha <<  std::endl;
std::cout << "auto  = " << step <<  std::endl;
std::cout << "bool 1(true) = " << left <<  std::endl;
std::cout << "bool 2(false) = " << right <<  std::endl;
std::cout << "size_t  = " << age2 <<  std::endl;
std::cout << "string = " << name <<  std::endl;


//data type (modifiers)

const int num = 18.11; // remains constant throughout the code and cannot be changed

signed num1 = 50; // standard version of an integer data type
long num2 = 34242340L; // used to store larger integer numbersSS
long long num3 = 1234567890123456789LL; // used to store a wider range of large integer numbers
unsigned num4 = 100; // used to store unsigned integer numbers (only positive integer numbers)
short int num5 = 10; // used to store a smaller range of integer numbers
volatile int  num6 = 90; // used to indicate that a variable can be changed at any time and these changes should not be optimized by the compiler

std::cout << "data type (modifiers)" << std::endl; 
std::cout << "const integer = " << num <<  std::endl; // print 
std::cout << "signed = " << num1 <<  std::endl;
std::cout << "long = " << num2 <<  std::endl;
std::cout << "long long = " << num3 <<  std::endl;
std::cout << "unsigned  = " << num4 <<  std::endl;
std::cout << "short = " << num5 <<  std::endl;
std::cout << "volatile = " << num6 <<  std::endl;


using name_me = string; // creates a new name for a data type
name_me nameme = "mahmud"; // assigns the std::string data type to name_me, and from now on name_me can be used instead of std::string
std::cout << nameme;


    std::cout << namem::fname << std::endl; // accessing with the '::' operator
    std::cout << namem::lname << std::endl;
    std::cout << namem::age << std::endl;
    std::cout << namel::fname << std::endl;
    std::cout << namel::lname << std::endl;
    std::cout << namel::age << std::endl;

   std::cout << add(namem::age, namel::age); // using the add function continuously due to the using keyword 
       
       //return 0;
       //exit(0);
       //std::cin.get();
       //std::terminate();
       //std::abort();
       //std::quick_exit(0); calişmadi
       
}
