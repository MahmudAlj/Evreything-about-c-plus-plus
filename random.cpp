#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <cmath>

int main(){

srand(time(0)); // Every time the code runs, it resets srand function and gives a different random element each time

const int size1 = 10; // creates a constant value
char arr[size1]; // an array of character data type with a constant number of elements
int arr1[size1]; // an array of integer data type with a constant number of elements
const int size2 = 10; // creates a constant value
int arr2[size2]; // an array of integer data type with a constant number of elements
const int size = 6; // creates a constant value
int arr3[size]; // an array of integer data type with a constant number of elements

for (int i = 0; i < size1; i++) {
    arr1[i] = rand() * 26 / RAND_MAX + 1; // assigns a random number. (2000 * 26 / RAND_MAX + 1 = 2000 * 26 / 32767 + 1 ≈ 15.4)
    std::cout << arr1[i] << " ";
}
std::cout << std::endl;
for (int i = 0; i < size1; i++) {
    arr[i] = rand() % 26 + 'a'; // assigns a random lowercase letter. (creates a random array of 26 lowercase characters and takes as many elements as the for loop passes through, gets a random character each time)
    std::cout << arr[i] << " ";
}
std::cout << std::endl;
for (int i = 0; i < size2; i++) {
    arr2[i] = rand() * 26 / RAND_MAX + 2; // assigns a random number. (2000 * 26 / RAND_MAX + 1 = 2000 * 26 / 32767 + 1 ≈ 15.4)
    std::cout << arr2[i] << " ";
}
std::cout << std::endl;
for (int i = 0; i < size; i++) {
    arr3[i] = rand() % 6 + 1; // assigns a random number. (rand() % 6 generates a number between 0 and 5, and +1 adds that number, commonly used in games like rolling dice)
    std::cout << arr3[i] << " ";
}
int size4, size5;
bool like;

std::cout << "How many numbers do you want?";
std::cin >> size4;

std::cout << "What should be the maximum number?";
std::cin >> size5;

std::cout << "Should it start from 0 or 1?";
std::cin >> like;

if (like == true) {
    for (int i = 0; i < size4; i++) { // loop that runs in entered intervals
        std::cout << rand() % size5 + 1 << " " << std::endl; // generates a random number from 1 to the entered number
    }
}
else {
    for (int i = 0; i < size4; i++) { // loop that runs in entered intervals
        std::cout << rand() % size5 << " " << std::endl; // generates a random number from 0 to the entered number
    }
}

char char_d[26]; // assigning random letters to an array
for (int i = 0; i <= 25; i++) {
    char_d[i] = 'a' + std::rand() % 26; // assigning random lowercase letters to an array
    std::cout << char_d[i] << " ";
}
std::cout << std::endl;
char char_d1[26]; // assigning random letters to an array
for (int i = 0; i <= 25; i++) {
    char_d1[i] = 'A' + std::rand() % 26; // assigning random uppercase letters to an array
    std::cout << char_d1[i] << " ";
}
std::cout << std::endl;
int int_d[20];
for (int i = 0; i <= 20; i++) {
    int_d[i] = 1 + std::rand() % 20; // assigning random numbers from 1 to 20 to an array
    std::cout << int_d[i] << " ";
}
std::cout << std::endl;



int dizi[10] = {1,2,3,4,5,6,7,8,9,0}; // defines an array
int i = 0;
i = 0 + std::rand() % 9; // assigns a number between 0 and 10 to i and prints a random element from an array using that i
std::cout << dizi[i] << " ";

std::string isim = "mahmud code"; // randomly prints characters from a string
char harf;
for (int i = 0; i <= 10; i++) {
    harf = 0 + std::rand() % 10; // generates a random number between 0 and 10
    std::cout << isim[harf] << " "; // used to print the isim string, thus obtaining a random element from a string
}

    return 0;
}