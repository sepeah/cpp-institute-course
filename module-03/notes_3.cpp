
/*
 * Author: Sepe Ahtosalo
 * Date: January 29, 2026
 * A file for testing C++ features as they come along in the material of 
 * C++ Essentials 1 – Edube Interactive. module 2, part 1/2
 * https://cppinstitute.org/cpp-essentials-1


 *The result will likely be a nonsensical mix of code snippets
*/

#include <iostream>


// pointers
void function1();


int main() {
    function1();
    return 0;
}


void function1() {
int number;
int *pointer;   
number = 42;
pointer = &number; // pointer now holds the address of number variable

std::cout << "Value of number: " << number << std::endl;
std::cout << "Address of number: " << &number << std::endl;
}