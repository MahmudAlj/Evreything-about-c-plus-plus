#include <iostream>

int main(){

for (int i = 0; i <= 10; i++) { // This is a for loop where in the first block, a variable is defined and initialized to 0
		std::cout << i << std::endl;// In the second block, the condition for termination is specified, and in the third block, the increment amount is defined
	}// The code to be executed is specified here, and it continues until the condition in the second block is met
	
    int j = 0;// Similar to the above, but the variable is declared outside the loop
	while (j != 13) {  // Specifies where the loop should terminate
		std::cout << j << std::endl; // The code to be executed continues to be printed until the condition specified above is met
		j++; // Specifies the increment amount
	}
	
	std::string userPassword = "mahmud123";
	std::string password;
	do { // In this loop, the code block is executed first, then checked if it should continue or not
		std::cout << "Enter your password: " << std::endl;
		std::cin >> password;
		if(password != userPassword){  // If the condition is not met, the code to be executed is printed
		    std::cout << "Incorrect password, please try again." << std::endl;
		}
	} while (userPassword != password);  // This checks if the condition is true, if so, exits the loop; if false, goes back to the start
	
	std::cout << "Correct password entered." << std::endl;

    for (char i = 'A'; i <= 'Z'; i++) { // Prints uppercase letters from A to Z
		std::cout << i << " ";
	}
	
	for (int i = 0;i <= 26; i++) { // Prints numbers from 1 to 26
		std::cout << i << " ";
	}

start:

std::cout << "Hello" << std::endl;
int age;
std::cin >> age;

if(age >= 18){
    std::cout << "You are an adult." << std::endl;
}else{
    goto start;
}

    return 0;
}
