#include <iostream>

int main(){

bool oyle = 0;

if(oyle == false){ // If the specified condition is true, execute the code below
    std::cout << "okay"<< std::endl; // Code to be executed
}

if(oyle == true){ // If the condition above is not true, then else runs
    std::cout << "not okay" << std::endl; // Code to be executed
}else{ // Runs if the if condition above is not true
    std::cout << "okay" << std::endl; // Code to be executed
}

if(oyle == true){ // Checks if the condition is true, if not, it checks the next else if condition
    std::cout << "okay" << std::endl; // Code to be executed
}else if(oyle == false){ // Runs if the condition above is not true
     std::cout << "not okay" << std::endl; // Code to be executed
}else{ // Runs if neither of the two conditions above is true
    std::cout << "okay 2" << std::endl; // Code to be executed
}

    int x = 18;
	int b;
	std::cout << "enter the value of b!" << std::endl;
	std::cin >> b;
	if (x == b) { // Main condition, executes the code block below if true
		std::cout << "the number you entered is equal to x!" << b << " = " << x << std::endl;
	}
	else if (x > b) { // Second condition, executes this code block if the main condition is false and this condition is true
		std::cout << "the number you entered is smaller than x " << b << " < " << x << std::endl;
	}
	else if (x < b) { // Third condition, executes this code block if the previous two conditions are false and this one is true
		std::cout << "the number you entered is greater than x " << b << " > " << x << std::endl;
	}
	else { // Last condition, executes this code block if none of the above conditions are true
		std::cout << "not the number you entered " << b << " != " << x << std::endl;
	}
    
    int grade;
	std::cout << "enter a grade " << std::endl;
	std::cin >> grade;
	

	switch (grade) { // Determines which variables will be used as conditions
	case 90: // Executes the code block below if the condition in the case statement matches
		std::cout << "your grade is ninety " << grade << std::endl;
		break; // Exits the loop if the previous condition is true because of the 'break' keyword
	case 80: // Executes the code block below if the condition in the case statement matches
		std::cout << "your grade is eighty " << grade << std::endl;
		break; // Exits the loop if the previous condition is true because of the 'break' keyword
	case 70: // Executes the code block below if the condition in the case statement matches
		std::cout << "your grade is seventy " << grade << std::endl;
		break; // Exits the loop if the previous condition is true because of the 'break' keyword
	case 60: // Executes the code block below if the condition in the case statement matches
		std::cout << "your grade is sixty " << grade << std::endl;
		break; // Exits the loop if the previous condition is true because of the 'break' keyword
	case 50: // Executes the code block below if the condition in the case statement matches
		std::cout << "your grade is fifty " << grade << std::endl;
		break; // Exits the loop if the previous condition is true because of the 'break' keyword
	case 40: // Executes the code block below if the condition in the case statement matches
		std::cout << "your grade is forty " << grade << std::endl;
		break; // Exits the loop if the previous condition is true because of the 'break' keyword
	default:std::cout << "your grade is either too high or too low" << std::endl; // Executes this code block if none of the above conditions are true
	}


int y = 10;
std::cout << (x == 10) ? true : false; // If the condition inside the parentheses is true, it will execute the code after the question mark, if false, it will execute the code after the colon


    return 0;
} 
