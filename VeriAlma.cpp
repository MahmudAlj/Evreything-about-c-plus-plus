#include <iostream> 

int main(){

int age;
char firsta;
std::string name;

std::cout <<"enter an integer variable =  "<< std::endl;
std::cin >> age; // used to get input from user
std::cout <<"enter a character variable =  "<< std::endl;
std::cin >> firsta;  // used to get input from user
std::cout <<"enter a string variable =  "<< std::endl;
std::cin >> name;  // used to get input from user

std::cout <<"entered integer variable =  "<< age << std::endl; // print the received input 
std::cout <<"entered character variable =  "<< firsta << std::endl; // print the received input
std::cout <<"entered string variable =  "<< name << std::endl; // print the received input


    int x;
	float pi; 
	double e;
	char a;
	bool d;
	std::string isim;
    std::string isim2;

	std::cout << "write an integer value?" << std::endl;
	std::cin >> x; // write an integer value
	std::cout << "this is an integer expression = " << x << std::endl; // print the integer expression

	std::cout << "write a float value?" << std::endl;
	std::cin >> pi; // write a float value
	std::cout << "this is a float expression = " << pi << std::endl; // print the float expression

	std::cout << "write a double value?" << std::endl;
	std::cin >> e; // write a double value
	std::cout << "this is a double expression = " << e << std::endl; // print the double expression
	
	std::cout << "write a character?" << std::endl;
	std::cin >> a; // write a character
    std::cout << "this is a character expression = " << a << std::endl; // print the character expression

	std::cout << "write a bool value?" << std::endl;
	std::cin >> d; // write a bool value (true / false)
	std::cout << "this is a bool expression = " << d << std::endl; // print the bool expression 
	
	std::cout << "write a string word?" << std::endl;
	std::cin >> isim; // write a single word
	std::cout << "this is a string expression = " << isim << std::endl; // print the string expression

	std::cin.ignore(); // used to clear the std::cin function as it's filled with previous input

	std::cout << "write a string text?" << std::endl;
	std::getline(std::cin, isim2); // write a text
	std::cout << "the text you wrote = " << isim2 << std::endl; // print the text
	
	std::string nickname; // string variable
	std::cout << "enter your name \n";
	std::getline(std::cin,nickname); // if multiple strings (words or sentences) are to be entered, getline function is used (can also be used for text input)
	int length = nickname.length(); // calculates the length of the entered string or any data type
	if (length >= 6) std::cout << "hello " << nickname << std::endl; // if condition
	else std::cout << "your name is too short, please enter your full name " << nickname << std::endl; // code that will run if the if condition is not met
 
    return 0;
}
