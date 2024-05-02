#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <cmath>
int main(){

    int x = 20;
	int y = 12;
	bool l = true;
	// Arithmetic Operators
	std::cout << 20 + 12 << std::endl; // Addition (+): Performs addition operation.
	std::cout << 20 - 12 << std::endl; // Subtraction (-): Performs subtraction operation.
	std::cout << 20 * 12 << std::endl; // Multiplication (*): Performs multiplication operation.
	std::cout << 20 / 12 << std::endl; // Division (/): Performs division operation.
	std::cout << 20 % 12 << std::endl; // Modulus (%): Performs modulus operation.

	// Assignment Operators
	x = y;  // Assignment (=): Used to assign a value to a variable. (x changes in this operation)
	std::cout << " 1 =  " << x << " <-> " << y << std::endl;
	x += y; // Addition Assignment (+=): Assigns value to a variable by performing addition operation.
	std::cout << " 2 =  " << x << " <-> " << y << std::endl;
	x -= y; // Subtraction Assignment (-=): Assigns value to a variable by performing subtraction operation.
	std::cout << " 3 =  " << x << " <-> " << y << std::endl;
	x *= y; // Multiplication Assignment (*=): Assigns value to a variable by performing multiplication operation.
	std::cout << " 4 =  " << x << " <-> " << y << std::endl;
	x /= y; // Division Assignment (/=): Assigns value to a variable by performing division operation.
	std::cout << " 5 =  " << x << " <-> " << y << std::endl;
	x %= y; // Modulus Assignment (%=): Assigns value to a variable by performing modulus operation.
	std::cout << " 6 =  " << x << " <-> " << y << std::endl;

	// Comparison Operators
	if (x == y) // Equal to (==): Checks if two values are equal.
		std::cout << "true " << std::endl;
	else
		std::cout << "false" << std::endl;
	if (x != y) // Not equal to (!=): Checks if two values are not equal.
		std::cout << "true " << std::endl;
	else
		std::cout << "false" << std::endl;
	if (x > y)// Greater than (>): Checks if one value is greater than the other.
		std::cout << "true " << std::endl;
	else
		std::cout << "false" << std::endl;
	if (x < y) // Less than (<): Checks if one value is less than the other.
		std::cout << "true " << std::endl;
	else
		std::cout << "false" << std::endl;
	if (x >= y)// Greater than or equal to (>=): Checks if one value is greater than or equal to the other.
		std::cout << "true " << std::endl;
	else
		std::cout << "false" << std::endl;
	if (x <= y)// Less than or equal to (<=): Checks if one value is less than or equal to the other.
		std::cout << "true " << std::endl;
	else
		std::cout << "false" << std::endl;

	// Logical Operators
	if (x == y && x <= y) // AND (&&): Checks if both conditions are true.
		std::cout << " me " << std::endl;
	else
		std::cout << " you " << std::endl;
	if (x == y || x <= y) // OR (||): Checks if at least one of the conditions is true.
		std::cout << " me " << std::endl;
	else
		std::cout << " you " << std::endl;
	while (!(x == y)) { std::cout << " them " << std::endl; break; } // NOT (!): Inverts the truth value of a condition.

	// Increment/Decrement Operators
	while (l = true) {
		x++; // Increment (++): Increases the value of a variable by 1.
		y--; // Decrement (--): Decreases the value of a variable by 1.
		std::cout << " 1 =  " << x << " <-> " << y << std::endl;
		if (x < y) {
			--x; // Decrements the value of a variable by 1. (decrements first)
			++y; // Increments the value of a variable by 1. (increments first)
			std::cout << " 2 =  " << x << " <-> " << y << std::endl;
			l = false;
			break;
		}
	}

	// Bitwise Operators

	// Bitwise AND
	int c = x & y;  // Bitwise AND (&): Performs bitwise AND operation between two numbers.
	std::cout << "Bitwise AND result: " << c << std::endl;

	// Bitwise OR
	int d = x | y;  // Bitwise OR (|): Performs bitwise OR operation between two numbers.
	std::cout << "Bitwise OR result: " << d << std::endl;

	// Bitwise NOT
	int e = ~x;     // Bitwise NOT (~): Performs bitwise NOT operation on a number.
	std::cout << "Bitwise NOT result: " << e << std::endl;

	// Bitwise XOR
	int f = x ^ y;  // Bitwise XOR (^): Performs bitwise XOR operation between two numbers.
	std::cout << "Bitwise XOR result: " << f << std::endl;

	// Left Shift
	int g = x << 2;  // Left Shift (<<): Shifts the bits of a number to the left by a specified number of positions.
	std::cout << "Left shift result: " << g << std::endl;
	
	// Right Shift
	int h = y >> 2;  // Right Shift (>>): Shifts the bits of a number to the right by a specified number of positions.
	std::cout << "Right shift result: " << h << std::endl;
	return 0;
}
